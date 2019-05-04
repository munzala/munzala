# Copyright (c) 2019 Geoffrey Huntley. All rights reserved.
# SPDX-License-Identifier: AGPL-3.0

#  Variables.tf declares has the default variables that are shared by all environments
# $var.region, $var.domain, $var.tf_s3_bucket

# Read credentials from environment variables
#$ export AWS_ACCESS_KEY_ID="anaccesskey"
#$ export AWS_SECRET_ACCESS_KEY="asecretkey"
#$ export AWS_DEFAULT_REGION="us-west-2"
#$ terraform plan
provider "aws" {
  profile = "${var.aws_profile}"
  region  = "${var.region}"
}

provider "aws" {
  profile = "${var.aws_profile}"
  region  = "us-east-1"
  alias   = "us-east-1"
}

provider "aws" {
  profile = "${var.aws_profile}"
  region  = "us-west-1"
  alias   = "us-west-1"
}

data "terraform_remote_state" "master_state" {
  backend = "s3"

  config {
    bucket = "${var.tf_s3_bucket}"
    region = "${var.region}"
    key    = "${var.master_state_file}"
  }
}

variable "aws_profile" {
  description = "Which AWS profile is should be used? Defaults to \"default\""
  default     = "default"
}

variable "region" {
  default = "us-east-1"
}

# This should be changed to reflect the service / stack defined by this repo
# for example replace "ref" with "cms", "slackbot", etc
variable "stack" {
  default = "privacyhub"
}

variable "tf_s3_bucket" {
  description = "S3 bucket Terraform can use for state"
  default     = "asics-devops-state-us-east-1"
}

variable "master_state_file" {
  default = "terraform-privacyhub/state/base/base.tfstate"
}

variable "prod_state_file" {
  default = "terraform-privacyhub/state/production/production.tfstate"
}

variable "staging_state_file" {
  default = "terraform-privacyhub/state/staging/staging.tfstate"
}

variable "dev_state_file" {
  default = "terraform-privacyhub/state/dev/dev.tfstate"
}

variable "price_class" {
  default = "PriceClass_All"
}


