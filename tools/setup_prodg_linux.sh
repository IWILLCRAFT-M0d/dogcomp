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
download "https://github.com/AngheloAlf/sce_ps2_sdk_24/releases/latest/download/sce_ps2_sdk_24.tar.gz"

# Extract the compiler into the tools dir
echo "Extracting compiler to $TOP/tools..."
mkdir $TOP/tools/ee-gcc2.95.3
cd $TOP/tools/ee-gcc2.95.3
tar -xf /tmp/sce_ps2_sdk_24.tar.gz

echo "Removing temporary files..."
rm /tmp/sce_ps2_sdk_24.tar.gz

echo "Setup complete!"
