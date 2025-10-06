#!/bin/bash

set -e

WINE_ROOT=~/.wine/drive_c
TOP=$(cd "$(dirname "$0")"; pwd)/..

die() { # perl-style `die` expressions.
	echo "Error: $@"
	exit 1
}

# downloads files without checking integrity
download() {
	echo "Downloading $1..."
	wget -qP /tmp $1

	BASENAME=$(basename $1)

	#echo "moving files out of /tmp"
	#mv /tmp/$BASENAME $TOP
}

echo Starting ProDG setup script...

# download required files (registry + SDK package)
download "https://github.com/decompme/compilers/releases/download/compilers/ps2_compilers.tar.xz"

# apply environment variables from the registry file
# wine regedit prodg_env.reg

# Extract the compiler into the tools dir
echo "Extracting compiler to $TOP/tools..."
cd $TOP/tools
tar -xf /tmp/ps2_compilers.tar.xz ee-gcc2.95.2-274/

#echo "Removing temporary files..."
rm /tmp/ps2_compilers.tar.xz

echo "Setup complete!"
