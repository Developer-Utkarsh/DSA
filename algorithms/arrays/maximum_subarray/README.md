# Maximum Subarray Problem 📊

This directory contains implementations of the Maximum Subarray problem, demonstrating the evolution from basic approaches to the efficient Kadane's algorithm.

## Problem Statement
Given an integer array, find the contiguous subarray with the largest sum.

## Learning Path
1. Generate all subarrays (O(n²))
2. Brute force approach to find maximum subarray sum (O(n³))
3. Kadane's algorithm implementation (O(n))

## Kadane's Algorithm Explanation

### Core Idea
Kadane's algorithm uses dynamic programming to solve the maximum subarray problem. It maintains two variables:
- `currentSum`: Tracks the current subarray sum
- `maxSum`: Stores the maximum sum found so far

### How It Works
1. Initialize `maxSum` as the smallest possible integer
2. For each element in array:
   - Add current element to `currentSum`
   - Update `maxSum` if `currentSum` is larger
   - If `currentSum` becomes negative, reset it to 0
   - Continue to next element

### Visual Example
Array: [-2, 1, -3, 4, -1, 2, 1, -5, 4]

```
Step by step:
[-2] → currentSum = -2, maxSum = -2, reset currentSum = 0
[1] → currentSum = 1, maxSum = 1
[-3] → currentSum = -2, maxSum = 1, reset currentSum = 0
[4] → currentSum = 4, maxSum = 4
[-1] → currentSum = 3, maxSum = 4
[2] → currentSum = 5, maxSum = 5
[1] → currentSum = 6, maxSum = 6
[-5] → currentSum = 1, maxSum = 6
[4] → currentSum = 5, maxSum = 6

Final maxSum = 6 (subarray [4, -1, 2, 1])
```

## Time Complexity Analysis
1. **Generate Subarrays**: O(n²)
   - Two nested loops to generate start and end points
   
2. **Brute Force**: O(n³)
   - Two loops for subarray bounds: O(n²)
   - One loop to calculate sum: O(n)
   
3. **Kadane's Algorithm**: O(n)
   - Single pass through array
   - Constant extra space

## Implementation Files
- `practice.cpp`: Template for practicing the implementations
- `MaxSum.cpp`: Complete implementation with explanations
