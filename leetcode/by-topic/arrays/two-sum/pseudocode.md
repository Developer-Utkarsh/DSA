# Approach 1: Brute Force

## High-level Idea
Check every possible pair of numbers in the array to find the pair that sums to target.

## Pseudocode
```algorithm
function twoSum(nums[], target):
    // Step 1: Iterate through each number
    for i from 0 to nums.length - 1:
        // Step 2: For each number, check all numbers after it
        for j from i + 1 to nums.length - 1:
            // Step 3: If sum equals target, return indices
            if nums[i] + nums[j] equals target:
                return [i, j]
    
    // Step 4: If no solution found, return empty array
    return []
```
