# Copyright (c) 2019 Geoffrey Huntley. All rights reserved.
# SPDX-License-Identifier: AGPL-3.0

{ lib, bundlerApp }:

bundlerApp {
  pname = "sass";
  gemdir = ./.;
  exes = [ "sass" "sass-convert" "scss" ];
}

