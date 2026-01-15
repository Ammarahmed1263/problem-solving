# 0-test-contest

## Folder Purpose

This folder acts like a small mixed "test contest": a set of beginner-friendly problems touching different core ideas (math, strings, greedy, simple search). It is a snapshot of early practice, where the focus is on getting comfortable with basic reasoning and clean C++ implementations.

## Problem List and Key Ideas

- `bear-and-big-brother.cpp`
  - Compares two growing values and counts how many years until one overtakes the other. Practices `while` loops, simple arithmetic, and understanding growth rates.

- `boy-or-girl.cpp`
  - Uses a set of characters from a username to decide an output based on the parity of distinct letters. Practices string iteration and `std::set` for uniqueness.

- `cellular-network.cpp`
  - Given city and tower positions, finds the maximum distance any city has to its nearest tower using a moving pointer over towers. Practices working with vectors, absolute differences, and a greedy scanning pattern.

- `polycarp-pockets.cpp`
  - Reads integer values and counts the maximum frequency of any value. Practices frequency counting using a fixed-size array/vector and tracking a running maximum.

- `team.cpp`
  - Reads how confident three teammates are about multiple problems and counts how many problems they are collectively sure they can solve. Intended to practice reading structured input, simple aggregation, and conditionals.

- `watermelon.cpp`
  - Decides whether a given integer can be split into two even positive parts. Practices parity checks and simple condition logic.

- `worms.cpp`
  - Searches for three numbers such that the sum of two equals a third, using a two-pointer technique on a sorted array. Practices sorting, two-pointer search, and careful loop boundaries.

## Concepts Practiced

The problems in this folder are chosen to reinforce:

- Basic loops and conditionals
- Reasoning about integer growth and simple simulations
- Frequency counting and tracking minima/maxima
- Working with strings and character sets
- Greedy scanning and pointer movement on arrays
- Two-pointer search for sum relationships

## Difficulty and Suggested Order

A possible order to approach the problems is:

1. `bear-and-big-brother.cpp`
2. `watermelon.cpp`
3. `boy-or-girl.cpp`
4. `polycarp-pockets.cpp`
5. `team.cpp`
6. `cellular-network.cpp`
7. `worms.cpp`

This roughly goes from simpler simulations and checks to more search-focused logic and pointer techniques.

## Implementation Patterns

Some common patterns used in this folder:

- Using `while` and `for` loops to simulate processes or scan arrays
- Using `std::vector` for dynamic arrays and `std::set` for uniqueness
- Keeping running counters for frequencies and maxima
- Carefully managing indices when using two pointers on a sorted array

These patterns show up frequently in entry-level programming contests and form a good base for more advanced problem solving.

## How to Compile and Run

Each file is standalone. Example (Windows / MinGW):

```bash
g++ -std=c++17 -O2 0-test-contest/worms.cpp -o worms.exe
./worms.exe
```

You can replace `worms.cpp` with any other file name from this folder and run it with appropriate input.

## Possible Improvements

Over time, this folder can be improved by:

- Adding brief comments above tricky parts of the code
- Documenting typical edge cases for each problem
- Exploring alternative solutions (e.g., different data structures or slightly different algorithms) to the same tasks

The goal is to keep this folder as a clear record of early contest-style practice while gradually improving code quality and explanations.