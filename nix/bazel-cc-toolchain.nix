# Copyright (c) 2019 Geoffrey Huntley. All rights reserved.
# SPDX-License-Identifier: AGPL-3.0

{ system ? builtins.currentSystem }:
(import ./bazel.nix { inherit system; }).bazel-cc-toolchain

