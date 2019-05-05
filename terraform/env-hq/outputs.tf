# Copyright (c) 2019 Geoffrey Huntley. All rights reserved.
# SPDX-License-Identifier: AGPL-3.0

output "iam_policy_arn" {
  value = "${aws_iam_policy.privacyhub_s3_rw.arn}"
}



