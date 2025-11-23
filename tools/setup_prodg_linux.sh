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
download "https://github.com/AngheloAlf/SN-Systems-ProDG_for_PS2_2.0/releases/latest/download/eegcc_sn_v2.73a.tar.gz"

# apply environment variables from the registry file
# wine regedit prodg_env.reg

# Extract the compiler into the tools dir
echo "Extracting compiler to $TOP/tools..."
mkdir $TOP/tools/ee-gcc2.95.2-273a
cd $TOP/tools/ee-gcc2.95.2-273a
tar -xf /tmp/eegcc_sn_v2.73a.tar.gz

echo "Removing temporary files..."
rm /tmp/eegcc_sn_v2.73a.tar.gz

echo "Setup complete!"
