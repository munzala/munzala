workspace(name = "munzala")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

rules_haskell_version = "0.8"

http_archive(
    name = "io_tweag_rules_haskell",
    sha256 = "431d492a8ee6a110cdf42496181c9d27225dfb997379e64a148eb8e69f272ab7",
    strip_prefix = "rules_haskell-%s" % rules_haskell_version,
    urls = ["https://github.com/tweag/rules_haskell/archive/v%s.tar.gz" % rules_haskell_version],
)


load("@io_tweag_rules_haskell//haskell:repositories.bzl", "haskell_repositories")

haskell_repositories()

rules_nixpkgs_version = "0.5.2"

http_archive(
    name = "io_tweag_rules_nixpkgs",
    sha256 = "5a384daa57b49abf9f0b672852f1a66a3c52aecf9d4d2ac64f6de0fd307690c8",
    strip_prefix = "rules_nixpkgs-%s" % rules_nixpkgs_version,
    urls = ["https://github.com/tweag/rules_nixpkgs/archive/v%s.tar.gz" % rules_nixpkgs_version],
)

load(
    "@io_tweag_rules_nixpkgs//nixpkgs:nixpkgs.bzl",
    "nixpkgs_cc_configure",
    "nixpkgs_package",
)

# For the rts example.
nixpkgs_package(
    name = "ghc",
    attribute_path = "haskellPackages.ghc",
    build_file = "@io_tweag_rules_haskell//haskell:ghc.BUILD",
    repository = "@io_tweag_rules_haskell//nixpkgs:default.nix",
)

nixpkgs_cc_configure(
    nix_file = "@io_tweag_rules_haskell//nixpkgs:cc-toolchain.nix",
    repository = "@io_tweag_rules_haskell//nixpkgs:default.nix",
)

load(
    "@io_tweag_rules_haskell//haskell:nixpkgs.bzl",
    "haskell_register_ghc_nixpkgs",
)

haskell_register_ghc_nixpkgs(
    repositories = {
        "nixpkgs": "@io_tweag_rules_haskell//nixpkgs:default.nix",
    },
    version = "8.6.3",
)

load(
    "@io_tweag_rules_haskell//haskell:haskell.bzl",
    "haskell_register_ghc_bindists",
)

haskell_register_ghc_bindists(version = "8.6.3")



load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

git_repository(
    name = "io_bazel_rules_docker",
    commit = "f737dd01fa2255feb84c87adf442e2d32824f420",
    shallow_since = "1556732024 -0400",
    remote = "https://github.com/bazelbuild/rules_docker.git",
)

load(
    "@io_bazel_rules_docker//repositories:repositories.bzl",
    container_repositories = "repositories",
)
container_repositories()

# This requires rules_docker to be fully instantiated before
# it is pulled in.
git_repository(
    name = "io_bazel_rules_k8s",
    commit = "94e92d11da6fa178d035cedf9041bae9a104b948",
    remote = "https://github.com/bazelbuild/rules_k8s.git",
)

load("@io_bazel_rules_k8s//k8s:k8s.bzl", "k8s_repositories")

k8s_repositories()