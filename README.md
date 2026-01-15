# Problem Solving Journey (C++)

## Purpose of This Repository

This repository documents my ongoing journey of improving problem-solving skills. Each file here is a focused attempt to solve a competitive-programming style task, with an emphasis on clean implementations and learning core algorithms and patterns step by step.

The goal is not just to collect accepted solutions, but to show progression in thinking: from simple loops and brute-force, towards more structured techniques over time.

## Repository Structure

- `0-test-contest/`
  - A small mixed set of introductory problems, an evaluation contest. The problems cover basic math, strings, greedy reasoning, and simple search.
- `1-loops-and-brute-force/`
  - Problems chosen specifically to practice loops, enumeration, and straightforward brute-force solutions over small input ranges.

New folders will be added as I explore more topics (sorting, two pointers, data structures, graphs, etc.).

## Problem Sources and Naming

- Problems are inspired by classic competitive programming platforms (e.g., Codeforces-style tasks) but this repository intentionally stays generic and does not embed external links.
- Filenames usually mirror the original problem titles, sometimes with a short prefix (like `A.` or `B.`) indicating the problem order within a set.
- Each `.cpp` file is self-contained and solves exactly one problem.

## Setup and How to Run

Requirements:

- A C++ compiler with C++17 support (for example, `g++` from MinGW or a recent Visual Studio build tools installation on Windows).

Example: compile and run a single problem from the command line (Windows / MinGW):

```bash
g++ -std=c++17 -O2 0-test-contest/bear-and-big-brother.cpp -o bear-and-big-brother.exe
./bear-and-big-brother.exe
```

Each file is independent, so you can compile any `.cpp` you are interested in the same way.

## How to Use This Repository

- **As a learner:**
  - Pick a folder, read its README to understand the focus.
  - Try to solve each problem on your own first (on paper or in your own file).
  - Compare your solution with the one here and note differences in approach, edge cases, or implementation details.

- **As a reviewer/recruiter:**
  - Use the folder READMEs to see which concepts each file targets.
  - Skim a few representative solutions to get a sense of my coding style, attention to edge cases, and comfort with basic C++ STL.

## Future Expansion

This repository is meant to grow over time. Planned directions include:

- Adding new topic-focused folders (e.g., `2-two-pointers/`, `3-sorting-and-searching/`, `4-data-structures/`, etc.).
- Providing brief explanations or comments inside the more interesting solutions.
- Occasionally revisiting older problems to refactor or implement alternative, more efficient approaches.

The structure is intentionally simple so that it remains easy to navigate as the number of problems increases.