# 1-loops-and-brute-force

## Folder Purpose

This folder focuses on strengthening fundamentals: loops, brute-force enumeration, and straightforward reasoning over small input ranges. The problems here are typical of early competitive programming rounds and are great training for getting comfortable with writing correct, simple C++ solutions.

## Problem Ordering and Naming

Files are named with a prefix like `A.`, `B.`, `C.` to reflect a typical contest order from easier to more involved. You can follow this order (A through F) for a smooth progression in difficulty and variety of ideas.

## Problem List and Techniques

- `A.Team.cpp`
  - Counts how many problems a team is confident they can solve based on three members' opinions. Practices reading structured input in a loop, summing small integers, and basic condition checking.

- `B.Pangram.cpp`
  - Checks whether a string contains every letter of the English alphabet at least once. Practices string iteration, case handling (via `tolower`), and scanning for all required characters.

- `C.System_of_Equations.cpp`
  - Counts pairs `(a, b)` that satisfy a small system of equations by brute-forcing over possible `a` values and deriving `b`. Practices bounded loops, reasoning about constraints, and avoiding unnecessary work.

- `D.Choosing_Laptop.cpp`
  - Given specs for several laptops, detects which options are dominated by others and returns the best non-dominated laptop with the lowest price. Practices nested loops, working with 2D vectors, and implementing a dominance check.

- `E.IQ-Test.cpp`
  - Identifies the position of the single number whose parity (odd/even) differs from the rest. Practices counting categories while reading input and remembering the last index for each category.

- `F.Friends.cpp`
  - Models friendships between five people using a small adjacency matrix and checks all triples for a fully connected or fully disconnected group. Practices working with a fixed-size 2D array and triple nested loops over combinations.

## Core Techniques Practiced

Across this folder you will see repeated use of:

- Simple and nested `for` loops
- Brute-force enumeration when constraints are small
- Conditional logic to track counts, flags, or best candidates
- Arrays and `std::vector` for storing input
- Basic use of a 2D matrix to represent relationships

These are foundational skills before moving to more advanced algorithms.

## Constraints and Common Pitfalls

The underlying problems typically have small enough constraints that brute-force is acceptable, but still require attention to:

- Off-by-one errors in loops and indices
- Handling case sensitivity correctly when working with strings
- Avoiding integer overflow when squaring values (e.g., `a * a` or `b * b`)
- Making sure dominance checks consider all relevant attributes

## How to Use This Folder for Practice

- Try to re-implement each solution from scratch without looking at the code.
- Once you have a working solution, compare it with the version here and note where the logic or structure differs.
- Experiment by rewriting some problems with different loop styles or slightly more efficient checks while keeping the same behavior.

## Extensions and Next Topics

After getting comfortable with these patterns, natural next steps include:

- Moving from brute-force to more optimized strategies (greedy, two pointers, binary search)
- Practicing similar problems where constraints are larger and require better-than-quadratic solutions
- Introducing more advanced data structures (sets, maps, priority queues) in future folders

This folder is meant to be a solid base of loop and brute-force practice that future topics will build on.