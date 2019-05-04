build:
	nix-build release.nix

run: build
	result/bin/munzala

repl:
	nix-shell --pure shell.nix --run \
		"cabal repl lib:munzala"

shell:
	nix-shell shell.nix

shell-pure:
	nix-shell --pure shell.nix

external-shell:
	nix-shell external.nix

.PHONY: build run repl shell shell-pure external-shell