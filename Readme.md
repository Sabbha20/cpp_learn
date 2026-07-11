# C++ Practice — Learn

A concise workspace for practicing C++ examples and exercises. This repository contains a small set
of example source files and guidance for building and running them across macOS, Linux and Windows.

## Table of contents
- Purpose
- Prerequisites
- Building and running
- Visual Studio Code recommendations
- Helpful tips

## Purpose

This folder is intended as a minimal, opinionated setup for practicing modern C++ (C++17/C++20).
Files are intentionally small so you can focus on concepts, not tooling.

## Prerequisites

- A C++ compiler: GCC, Clang, or MSVC (for Windows).
- On macOS: VSCode and Homebrew-installed `clang`/`gcc`.
- On Linux: `g++` or `clang++` from your distribution package manager.
- Recommended language standard: C++17 or C++20.

## Build & run (examples)

Build with `clang++` or `g++`:

```bash
clang++ -std=c++20 Main.cc -o myprogram
# or
g++ -std=c++20 Main.cc -o myprogram

./myprogram
```

If your file is named `main.cpp` instead, use that filename in the command above. Replace `-std=c++20`
with `-std=c++17` if you prefer C++17 compatibility.

### Notes for Windows (MSVC)

Using MSVC from Visual Studio or the Developer Command Prompt:

```powershell
cl /std:c++17 /EHsc Main.cc
.
```

## Visual Studio Code

Recommended: install Visual Studio Code and these extensions for a smooth editing and build experience.

- C/C++ (Microsoft)
- C/C++ Runner (franneck94) — quick build/run actions
- CodeLLDB or the MSVC debugger (for debugging support)

Add (or override) workspace settings in `.vscode/settings.json` to target the language standard used:

```json
{
  "C_Cpp_Runner.cppStandard": "c++20",
  "C_Cpp.default.cppStandard": "c++20"
}
```

### C/C++ Runner — common keybindings

- Compile (Build) single file: `Ctrl+Alt+B` (Windows/Linux)
- Run (Execute) single file: `Ctrl+Alt+R` (Windows/Linux)

On macOS those actions are available too — key combinations are shown in VSCode's Command Palette
or in the extension documentation. (If you added the extension's screenshot, it will appear under `./media/`.)

### Use MSVC with C/C++ Runner

To enable MSVC for the runner, add this to `.vscode/settings.json`:

```json
{
  "C_Cpp_Runner.useMsvc": true
}
```

## Helpful tips

- Keep examples single-file when starting out — it simplifies compilation and debugging.
- Use `-Wall -Wextra -Wpedantic` (GCC/Clang) to enable helpful warnings.
- If you hit build errors, try compiling from the terminal first to see full diagnostics.

## Contributing / Next steps

Feel free to add new exercise files under this folder. If you want, I can:

- Add a small `Makefile` or `CMakeLists.txt` for building multiple examples.
- Add GitHub Actions to run a compile check on push.

Tell me which you'd like and I will implement it.
