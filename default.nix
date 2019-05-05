# Copyright (c) 2019 Geoffrey Huntley. All rights reserved.
# SPDX-License-Identifier: AGPL-3.0

{ mkDerivation, base, lens, stdenv }:
mkDerivation {
  pname = "munzala";
  version = "0.1.0.0";
  src = ./.;
  isLibrary = true;
  isExecutable = true;
  libraryHaskellDepends = [ base lens ];
  executableHaskellDepends = [ base ];
  license = stdenv.lib.licenses.agpl3;
}

