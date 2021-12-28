# xv6-mac-m1
Running xv6 on mac m1 processor.
Adding a System Call in xv6 kernel.

## Setup
### Install qemu
brew install qemu

### Download xv6 (risc-v) version of code from github
git clone https://github.com/mit-pdos/xv6-riscv.git

### Install RISC-V Compiler toolchain
brew tap riscv/riscv
brew install riscv-tools

### Compile and build xv6
cd xv6-riscv
make

## Running xv6
### To start xv6 on qemu
cd xv6-riscv
make qemu

### To exit from xv6 terminal
ctrl+A X

## Changes to be made to xv6 code
### Add a system call getiocount() in the xv6 kernel
