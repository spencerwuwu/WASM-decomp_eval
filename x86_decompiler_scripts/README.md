# X86 Decompiler Scripts

Using scripts and docker from 
[decompiler_explorer](https://github.com/decompiler-explorer/decompiler-explorer).

- May not be completed
  - angr
- License required
  - Hexrays
  - BinaryNinja
  - dewolf
  - relyze
- Encountering errors
  - reko
- Out of maintained
  - Boomerang
  - Recstdio
  - RetDec

## Instructions
In **decompiler_explorer**, run `python3 scripts/dce.py build`. This will build most 
docker images needed.

Then run each image with `--entrypoint=""`. Execute each script in place, except for
Ghidra we need to move the script to home directory and execute there.
