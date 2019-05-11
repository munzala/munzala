terraform {
  required_version = ">= 0.9.4"

  backend "s3" {
    bucket     = "rk-devops-state-us-east-1"
    region     = "us-east-1"
    key        = "munzla/state/base/base.tfstate"
    lock_table = "rk-terraformStateLock"
  }
}
