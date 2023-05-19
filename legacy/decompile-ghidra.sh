#!/usr/bin/env sh

GHIDRA_PATH=$1
GHIDRA_SCRIPT="$GHIDRA_PATH/support/analyzeHeadless"
GHIDRA_SCRIPTS_PATH="./ghidra_scripts"

DECOMPILED_DIR="./decompiled"

if [ $# -ne 1 ]; then
  echo "USAGE:"
  echo "    $0 <ghidra-path>"
  echo
  echo "EXAMPLE:"
  echo "    $0 ~/.ghidra_10.2.3_PUBLIC"
  exit 1
fi

if [ ! -d "$DECOMPILED_DIR" ]; then
  mkdir -p "$DECOMPILED_DIR"
fi

for binary in target/chstone/* target/pbc/*; do
  basename="$(basename $binary)"
  ghidra_project_path="/tmp/ghidra_project_$basename"
  ghidra_project_name="cs699"
  output="$DECOMPILED_DIR/$basename.c"

  printf "\033[34mDecompiling\033[m $binary → \033[32m$output\033[m\n"

  mkdir -p "$ghidra_project_path"

  "$GHIDRA_SCRIPT" "$ghidra_project_path" "$ghidra_project_name" \
    -import "$binary" \
    -scriptPath "$GHIDRA_SCRIPTS_PATH" \
    -postScript Decompile.java $output

  rm -rf "$ghidra_project_path"
done
