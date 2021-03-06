#!/usr/bin/env bash
# Copyright (c) 2019 Geoffrey Huntley. All rights reserved.
# SPDX-License-Identifier: AGPL-3.0

# shellcheck disable=SC2174

# Installs nix on a fresh machine
set -euo pipefail

## Functions ##

step() {
  echo "step: $*" >&2
}

## Main ##

cd "$(dirname "$0")/.."

if [[ ! -e /nix ]]; then
  step "Installing Nix"

  sudo mkdir -m 0755 /nix
  sudo chown "$(id -u):$(id -g)" /nix

  curl -sfL https://nixos.org/releases/nix/nix-2.2.2/install | bash
fi

# shellcheck source=../dev-env/lib/ensure-nix
source dev-env/lib/ensure-nix

export NIX_CONF_DIR=$PWD/dev-env/etc

step "Building dev-env dependencies"

