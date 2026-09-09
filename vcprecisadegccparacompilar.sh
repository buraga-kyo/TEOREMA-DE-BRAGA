#!/bin/sh
set -eu
cd "$(dirname "$0")"
gcc -std=c11 -O2 \
    -Wall -Wextra -Wpedantic -Wshadow -Wconversion -Wno-misleading-indentation \
    -ffreestanding -fno-builtin -fno-tree-loop-distribute-patterns \
    -fno-stack-protector -fno-asynchronous-unwind-tables -fcf-protection=none \
    -fno-pie -no-pie -static -nostdlib -nostartfiles \
    -mgeneral-regs-only \
    -Wl,-e,paizao -Wl,--build-id=none \
    "$@" \
    -o ayahuasca-num-fim-de-semana-e-md-no-outro \
    ayahuasca-num-fim-de-semana-e-md-no-outro.c
echo "ta na mão> $(pwd)/ayahuasca-num-fim-de-semana-e-md-no-outro"
