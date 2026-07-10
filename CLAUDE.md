# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Repository purpose

A collection of standalone C++ practice exercises (練習1.cpp, 練習2.cpp, ...). Each file is self-contained with its own `main()` — there is no shared library code or build system tying them together.

## Commands

Build and run a single exercise:

```bash
g++ 練習1.cpp -o 練習1
./練習1
```

There is no test suite, linter, or Makefile — each exercise is verified by compiling and running it manually with sample input.

## Conventions

- Exercise files are named `練習N.cpp` (Chinese for "exercise N"); numbering is not necessarily contiguous.
- Files use `#include <bits/stdc++.h>` and `using namespace std;`.
- Compiled binaries (`練習N` with no extension) are gitignored via `.gitignore` (`練習*` / `!練習*.cpp`) — only source files are tracked.
- `README.md` maintains a table (題目列表) mapping each `練習N.cpp` file to its problem description. **Whenever a `練習N.cpp` file is added or its problem statement changes, update this table before committing/pushing** — it is the index for the whole repo and easily drifts out of sync otherwise.
