# C++ Vectors Guide 📚

This directory contains implementations and practice problems for C++ vectors - the dynamic array data structure from the Standard Template Library (STL).

## What is a Vector? 🤔

A vector is a dynamic array that can grow or shrink in size automatically. Think of it as a smarter array that manages its own memory!

## Directory Structure 📂
```
vectors/
├── README.md          # This guide
├── vectors.cpp        # Basic vector operations
└── practice/          # Additional practice problems
```

## Core Operations Implemented ⚡

1. **Linear Search** (`linearSearch`)
   - Search for an element in a vector
   - Time Complexity: O(n)
   - [LeetCode Similar Problem](https://leetcode.com/problems/binary-search)

2. **Reverse Vector** (`reverseVector`)
   - Reverse elements using two-pointer approach
   - Time Complexity: O(n)
   - [LeetCode Similar Problem](https://leetcode.com/problems/reverse-array)

## Vector Operations Cheat Sheet 📝

```cpp
vector<int> vec;              // Create empty vector
vector<int> vec(5, 0);       // Create vector of size 5 with all 0s
vec.push_back(element);      // Add element at end
vec.pop_back();             // Remove last element
vec.size();                 // Get current size
vec.capacity();             // Get current capacity
vec.front();                // Get first element
vec.back();                 // Get last element
vec.at(index);             // Get element at index (with bounds checking)
vec[index];                // Get element at index (no bounds checking)
```

## Common Patterns 🎯

1. **Two-Pointer Technique**
   ```cpp
   // Example from reverseVector function
   int start = 0;
   int end = vec.size() - 1;
   while(start < end) {
       swap(vec[start], vec[end]);
       start++;
       end--;
   }
   ```

## Practice Problems 💪

1. **Implemented in vectors.cpp:**
   - Linear Search Implementation
   - Vector Reversal
   - Basic Vector Operations

2. **Suggested LeetCode Problems:**
   - [Two Sum](https://leetcode.com/problems/two-sum)
   - [Remove Duplicates](https://leetcode.com/problems/remove-duplicates-from-sorted-array)
   - [Rotate Array](https://leetcode.com/problems/rotate-array)
   - [Single Number](https://leetcode.com/problems/single-number) - Great problem for learning bit manipulation with vectors! Check out our detailed solution in `/leetcode/by-topic/arrays/single-number/`

## Best Practices 💡

1. **Memory Management**
   - Use `reserve()` when size is known
   - Prefer `emplace_back()` over `push_back()`
   - Clear vector using `clear()` when done

2. **Safety**
   - Use `at()` for bounds-checked access
   - Check `empty()` before accessing elements
   - Use range-based for loops when possible

## Common Mistakes to Avoid ⚠️

1. Not checking vector size before access
2. Forgetting that `push_back()` can invalidate iterators
3. Using `vector<bool>` (it's specialized and behaves differently)
4. Not reserving space when size is known

## Additional Resources 📚

- [CPP Reference - Vector](https://en.cppreference.com/w/cpp/container/vector)
- [GeeksForGeeks Vector Tutorial](https://www.geeksforgeeks.org/vector-in-cpp-stl/)
