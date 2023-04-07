#!/usr/bin/env sh

DECOMPILER=$1
DIR="decompiled"

if [[ -z "$DECOMPILER" ]]; then
  DECOMPILER="wasm2c"
fi

if [[ -z "$(which $DECOMPILER)" ]]; then
  echo "Error: cannot find '$DECOMPILER'"
  exit 1
fi

if [[ ! -d "$DIR" ]]; then
  mkdir $DIR
fi

NAME=$(basename $DECOMPILER)

# Ex. 'mylib.wasm' is decompiled to 'decompiled/mylib.c'
for file in *.wasm; do
  if [[ "$NAME" = "wasm2c" ]]; then
    $DECOMPILER $file -o "$DIR/$(basename $file .wasm).c"
  elif [[ "$NAME" = "w2c2" ]]; then
    $DECOMPILER $file "$DIR/$(basename $file .wasm).c"
  fi
done
