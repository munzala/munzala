# Copyright (c) 2019 Geoffrey Huntley. All rights reserved.
# SPDX-License-Identifier: AGPL-3.0

let
  pkgs = import <nixpkgs> { };
in
  pkgs.haskellPackages.callPackage ./default.nix { }
