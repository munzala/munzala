# Copyright (c) 2019 Geoffrey Huntley. All rights reserved.
# SPDX-License-Identifier: AGPL-3.0

{ nixpkgs ? import <nixpkgs> {} }:
  let
      inherit (nixpkgs) pkgs;
      inherit (pkgs) haskellPackages;

      project = import ./release.nix;
  in
  pkgs.stdenv.mkDerivation {
      name = "shell";
      buildInputs = project.env.nativeBuildInputs ++ [
        haskellPackages.cabal-install
    ];
}
