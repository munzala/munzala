#!/usr/bin/env bash
# Copyright (c) 2019 Geoffrey Huntley. All rights reserved.
# SPDX-License-Identifier: AGPL-3.0


set -euxo pipefail

eval "$($(dirname "$0")/dev-env/bin/de-assist)"

execution_log_postfix=${1:-}

export LC_ALL=en_US.UTF-8

ARTIFACT_DIRS="${BUILD_ARTIFACTSTAGINGDIRECTORY:-$PWD}"

# Bazel test only builds targets that are dependencies of a test suite
# so do a full build first.
(
  # Bazel also limits cache downloads by -j so increasing this to a ridiculous value
  # helps. Bazel separately controls the number of jobs using CPUs so this should not
  # overload machines.
  # This also appears to be what Google uses internally, see
  # https://github.com/bazelbuild/bazel/issues/6394#issuecomment-436234594.
  bazel build -j 200 //... --experimental_execution_log_file "$ARTIFACT_DIRS/build_execution${execution_log_postfix}.log"
)
bazel test -j 200 //... --experimental_execution_log_file "$ARTIFACT_DIRS/test_execution${execution_log_postfix}.log"
# Make sure that Bazel query works.
bazel query 'deps(//...)' > /dev/null
