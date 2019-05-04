# privacyhub.prod.asics.digital

locals {
  bucket_name = "static-asics-services-${var.env}-${data.aws_region.us-east-1.name}"
}

data "aws_s3_bucket" "bucket" {
  bucket = "${local.bucket_name}"
}

data "aws_iam_policy_document" "privacyhub_s3_rw" {
  statement {
    actions = [
      "s3:ListBucket",
      "s3:GetBucketLocation",
    ]

    resources = [
      "${data.aws_s3_bucket.bucket.arn}",
    ]

    condition {
      test     = "StringLike"
      variable = "prefix"

      values = [
        "",
        "${var.stack}/",
      ]
    }
  }

  statement {
    actions = [
      "s3:*",
    ]

    resources = [
      "${data.aws_s3_bucket.bucket.arn}/${var.stack}",
      "${data.aws_s3_bucket.bucket.arn}/${var.stack}/*",
    ]
  }
}

resource "aws_iam_policy" "privacyhub_s3_rw" {
  name_prefix = "privacyhub-s3-"
  path        = "/tf/${var.env}/"
  policy      = "${data.aws_iam_policy_document.privacyhub_s3_rw.json}"
}

module "privacyhub" {
  source                                                 = "github.com/FitnessKeeper/terraform-aws-s3-cloudfront?ref=v1.1.0"
  bucket_name                                            = "${data.aws_s3_bucket.bucket.id}"
  create_bucket                                          = false
  s3_region                                              = "${data.aws_region.us-east-1.name}"
  cloudfront_fqdn                                        = "${local.fqdn}"
  cloudfront_origin_path                                 = "/${var.stack}"
  cloudfront_origin_access_identity_path                 = "${var.cloudfront_origin_access_identity_path}"
  cloudfront_price_class                                 = "${var.price_class}"
  cloudfront_acm_cert_domain                             = "${local.tld}"
  cloudfront_default_cache_compress                      = true
  cloudfront_default_cache_viewer_protocol_policy        = "allow-all"
  cloudfront_default_cache_forwarded_values_query_string = true
  route53_toplevel_zone                                  = "${local.tld}"
}
