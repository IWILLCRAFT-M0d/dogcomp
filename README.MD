This setup is incomplete.
* Sony's SDK headers are still missing.
* m2ctx.py and permuter are not supported.

# Setup
The setup can be built on Linux or Windows through WSL. Follow the instructions below to set up the build environment.

## 1. Clone the repository
Clone the repo to your local machine:

```bash
git clone https://github.com/IWILLCRAFT-M0d/dogcomp && cd dogcomp
```

## 2. Extract your game's ELF file
Extract the file `SCES_512.48` from your game copy and put it into the `elf` folder.

## 3. Setup Python environment
If you don't have Python 3.9 or higher, install it:

```bash
sudo apt-get install python3 python3-pip
```

Create a Python environment for the project:

```bash
python3 -m venv env
```

Activate the environment:

```bash
source env/bin/activate
```

Then install the required Python packages:

```bash
pip3 install -U -r requirements.txt
```

## 4. Setup build environment
Setup wine:

```bash
sudo dpkg --add-architecture i386 && \
sudo apt-get update && \
sudo apt-get install wine32
```

Install the MIPS assembler:

```bash
sudo apt-get install binutils-mips-linux-gnu
```

Setup the compiler using the provided script:

```bash
./tools/setup_prodg_linux.sh
```

## 5. Configure and build the project
Run the configure script and the build with ninja:

```bash
python3 configure.py && ninja
```

The default behavior is to split the binary using Splat, build the object files (inserting the split assembly in place of non-matching functions), link the matching executable, and confirm that the checksum of the built executable matches the original.

You can change a little the behavior by passing any of the following arguments to  `configure.py`:

* `--clean/-c` - Delete any existing build files and configure the project.
* `--clean-only/-C` - Delete any existing build files **without** configuring the project.
* `--skip-checksum/-s` - Skip the checksum verification step.
* `--objdiff/-diff` - Builds target object files for comparison with objdiff and generates an objdiff config file..

