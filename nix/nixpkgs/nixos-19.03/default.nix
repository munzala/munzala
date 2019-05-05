# Copyright (c) 2019 Geoffrey Huntley. All rights reserved.
# SPDX-License-Identifier: AGPL-3.0

let
  spec = builtins.fromJSON (builtins.readFile ./default.src.json);
  src = builtins.fetchTarball {
    url = "https://github.com/${spec.owner}/${spec.repo}/archive/${spec.rev}.tar.gz";
    sha256 = spec.sha256;
  };
in
  src

