# 2-array-manipulation

## Folder Purpose

This folder focuses on working with arrays and vectors as core data structures. The problems here emphasize techniques like searching, filtering, transformations, and range-based operations over arrays and matrices. This builds on the loop and brute-force foundations while introducing more practical array manipulation patterns.

## Problem Ordering and Naming

Files follow the same naming convention (A through F) representing a progression from simpler array operations to more involved manipulations and searching strategies. This order is designed to gradually increase both complexity and variety of techniques.

## Problem List and Techniques

- `A.Anton-and-Letters.cpp`
  - Processes a set of distinct characters and counts unique letters or determines membership. Practices iterating over arrays, using sets or flags to track distinct elements, and simple counting logic.

- `B.Xenia-and-Ringroad.cpp`
  - Simulates movement around a circular array or ring-like structure, calculating total distance traveled. Practices handling circular/modular arithmetic on arrays and tracking cumulative sums.

- `C.Sale.cpp`
  - Filters array elements based on a condition (e.g., selecting negative numbers) and performs aggregation. Practices conditional selection, sorting or rearranging array elements, and sum calculations.

- `D.Points-in-Segments.cpp`
  - Determines which points from an array fall within given segments or ranges. Practices range queries, comparing array elements against interval boundaries, and possibly using binary search or sorting.

- `E.Diverse-Team.cpp`
  - Selects or identifies a diverse subset from an array based on criteria. Practices filtering arrays, maintaining order or indices, and implementing selection logic.

- `F.Beautiful-Matrix.cpp`
  - Works with a 2D matrix to find specific patterns, transformations, or properties. Practices nested loops over 2D arrays, understanding matrix indexing, and local or global property checks.

## Core Techniques Practiced

Across this folder you will see repeated use of:

- Iterating efficiently over arrays with meaningful stopping conditions
- Using vectors and 2D vectors for dynamic and structured data
- Sorting arrays and using binary search for faster lookups
- Range-based operations (e.g., cumulative sums, finding min/max in subarrays)
- Conditional filtering and counting of array elements
- 2D matrix iteration and index reasoning

These techniques form the bridge between simple loops and more sophisticated data structure usage.

## Constraints and Common Pitfalls

Array manipulation problems often have these considerations:

- Off-by-one errors when indexing or iterating over array bounds
- Confusion between value-based operations and index-based operations
- Integer overflow when computing sums or products of array elements
- Inefficient nested loops when the input size grows (n² or worse when n² may be too slow)
- Forgetting to handle edge cases like empty arrays or single-element arrays

## How to Use This Folder for Practice

- Start by understanding the problem description and expected behavior for each file.
- Implement your own solution first before comparing with the code here.
- Focus on recognizing which array technique (sorting, binary search, prefix sums, etc.) is most appropriate.
- After solving, consider whether a more efficient approach exists for larger input sizes.

## Extensions and Next Topics

After mastering these array manipulation patterns, consider exploring:

- Prefix and suffix arrays for efficient range queries
- Two-pointer techniques for sorted arrays
- Sliding window approaches for problems involving contiguous subarrays
- Hash maps and frequency arrays for count-based problems
- Introduction to more complex data structures (segment trees, sparse tables) for advanced range operations

These array skills are fundamental and will appear frequently in problems involving sequences, matrices, and linear data structures in future topics.