{ stdenv, fetchFromGitHub, writeScript, coreutils, findutils, makeWrapper }:

stdenv.mkDerivation rec {
  version = "0.1.0";
  name = "dade-test-sh-${version}";
  src = ./de-test-sh;
  buildInputs = [ makeWrapper ];
  phases = [ "installPhase" ];

  installPhase =
    ''
      set -x
      mkdir -p $out/bin
      cp $src $out/bin/de-test-sh
      chmod +x $out/bin/de-test-sh
      wrapProgram $out/bin/de-test-sh --prefix PATH : ${stdenv.lib.makeBinPath [ coreutils findutils ]}
      patchShebangs $out
    '';

  meta = {
    description = "Bash tests runner supporting OSHT and Bats tests.";
    platforms = stdenv.lib.platforms.all;
  };
}
