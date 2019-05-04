#Initialize.tf contains empty variable declarations for the variables that will be populated in each env’s .tfvars file

variable "env" {
  type = "string"
}

variable "fqdn" {
  type = "string"
}

variable "cloudfront_origin_access_identity_path" {
  type = "string"
}
