# Copyright (c) 2019 Geoffrey Huntley. All rights reserved.
# SPDX-License-Identifier: AGPL-3.0

{ pkgs }:

let

  inherit (pkgs.stdenv.lib) fix' extends;

  pythonPackages = pkgs.python27Packages;

  python = {
    interpreter = pythonPackages.python;
    mkDerivation = pythonPackages.buildPythonPackage;
    modules = pythonPackages.python.modules;
    overrideDerivation = drv: f: pythonPackages.buildPythonPackage (drv.drvAttrs // f drv.drvAttrs);
    pkgs = pythonPackages;
  };

  generated = import ./requirements_generated.nix { inherit pkgs python; };

in (fix' generated).cram

