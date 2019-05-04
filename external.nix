{ nixpkgs ? import <nixpkgs> {} }:
let
  inherit (nixpkgs) pkgs;
  
  haskellPackages = pkgs.haskellPackages.override {
    overrides = self: super: {
      munzala = self.callPackage ./default.nix {};
    };
  };
  
  haskellDeps = ps: with ps; [
    base
    munzala
  ];
  
  ghc = haskellPackages.ghcWithPackages haskellDeps;
  
  nixPackages = [
    ghc
    haskellPackages.munzala
    haskellPackages.cabal-install
  ];
in
pkgs.stdenv.mkDerivation {
  name = "env";
  buildInputs = nixPackages;
}