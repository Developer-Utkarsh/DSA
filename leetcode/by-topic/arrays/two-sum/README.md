# Two Sum - LeetCode #1

## Problem Link
[LeetCode Problem Link](https://leetcode.com/problems/two-sum)

## Difficulty
Easy

## Tags
- Array
- Hash Table
- Two Pointers

## Problem Statement
Given an array of integers `nums` and an integer `target`, return indices of the two numbers in the array such that they add up to `target`. You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

## Visual Explanation
![Approach 1](./diagrams/approach1.png)

## Approach
1. Use nested loops to check each pair of numbers
2. For each number at index i, check all numbers after it (index j)
3. If the sum equals target, return the indices [i, j]
4. If no solution is found, return empty array

## Complexity Analysis
- Time: O(n²) where n is the length of the input array
- Space: O(1) as we only use constant extra space

## Related Problems
- [3Sum](https://leetcode.com/problems/3sum)
- [4Sum](https://leetcode.com/problems/4sum)
- [Two Sum II - Input Array Is Sorted](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted)
