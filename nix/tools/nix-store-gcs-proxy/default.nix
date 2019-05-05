# Copyright (c) 2019 Geoffrey Huntley. All rights reserved.
# SPDX-License-Identifier: AGPL-3.0

{ buildGoPackage }:
buildGoPackage {
  name = "nix-store-gcs-proxy";
  goPackagePath = "github.com/digital-asset/daml/nix/tools/nix-store-gcs-proxy";
  src = ./.;
  goDeps = ./deps.nix;
}

