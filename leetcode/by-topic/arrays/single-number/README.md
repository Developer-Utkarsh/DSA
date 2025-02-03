# Single Number - LeetCode 136 🔍

## Problem Link
[LeetCode Problem 136 - Single Number](https://leetcode.com/problems/single-number/)

## Difficulty
Easy

## Tags
- Arrays
- Bit Manipulation
- XOR

## Problem Statement
Given a non-empty array of integers `nums`, every element appears twice except for one. Find that single element.

You must implement a solution with:
- Linear runtime complexity O(n)
- Constant extra space O(1)

### Examples

#### Example 1:
```
Input: nums = [2,2,1]
Output: 1
```

#### Example 2:
```
Input: nums = [4,1,2,1,2]
Output: 4
```

#### Example 3:
```
Input: nums = [1]
Output: 1
```

### Constraints
- `1 <= nums.length <= 3 * 10^4`
- `-3 * 10^4 <= nums[i] <= 3 * 10^4`
- Each element appears exactly twice except for one element which appears once

## Solution Approach
We use the XOR operation to find the single number. This works because:
1. XOR of a number with itself is 0
2. XOR of a number with 0 is the number itself
3. XOR is associative and commutative

Therefore, when we XOR all numbers:
- Pairs of numbers cancel out (become 0)
- The single number remains (XOR with 0)

## Complexity Analysis
- Time Complexity: O(n) - Single pass through the array
- Space Complexity: O(1) - Only using one variable

## Visual Explanation
See the diagram in `diagrams/approach1.drawio` for a visual representation of how XOR operations work in this solution.

## Related Problems
- [137. Single Number II](https://leetcode.com/problems/single-number-ii/)
- [260. Single Number III](https://leetcode.com/problems/single-number-iii/)
