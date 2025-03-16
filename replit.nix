{ pkgs }: {
	deps = [
   pkgs.unixtools.nettools
		pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}