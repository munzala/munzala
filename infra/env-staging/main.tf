# STAGING

locals {
  tld  = "${var.env}.${var.fqdn}"
  fqdn = "${var.stack}.${local.tld}"
}

data "aws_availability_zones" "available" {}

data "aws_region" "current" {
}

data "aws_region" "us-east-1" {
  name = "us-east-1"
}

data "aws_region" "us-west-1" {
  name = "us-west-1"
}

data "aws_route53_zone" "zone" {
  name = "${local.tld}." # feel free to make this lookup more sophisticated
}

data "aws_acm_certificate" "cloudfront" {
  domain   = "${local.tld}"
  statuses = ["ISSUED"]
  provider = "aws.us-east-1"
}

data "aws_acm_certificate" "cert" {
  domain   = "${local.tld}"
  statuses = ["ISSUED"]
}
