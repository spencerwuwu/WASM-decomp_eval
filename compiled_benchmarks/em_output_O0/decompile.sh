#!/usr/bin/env sh

WASM2C=$1
DIR="decompiled"

if [[ -z "$WASM2C" && -z $(which wasm2c) ]]; then
  echo "Error: cannot find 'wasm2c'"
  exit 1
fi

if [ ! -d "$DIR" ]; then
  mkdir $DIR
fi

# Ex. 'mylib.wasm' is decompiled to 'decompiled/mylib.c'
for file in *.wasm; do
  $WASM2C $file -o "$DIR/$(basename $file .wasm).c"
done
