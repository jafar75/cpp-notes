# C++ Learning Journal

This repository documents my journey through C++ — from core language features to modern C++ (C++11 and beyond). Each topic is accompanied by concise, focused examples that explain the "why" and "how."

## Structure

- `basics/` — Fundamental language features (types, control flow, enums, etc.)
- `modern_cpp/` — Smart pointers, lambdas, range-based for loops, etc.
- `templates/` — Function and class templates, SFINAE, concepts (C++20)
- `build/` — Compiled binaries and CMake build files

## Build Instructions

This project uses CMake to build multiple small executables for each example.

```bash
mkdir build
cd build
cmake ..
make
