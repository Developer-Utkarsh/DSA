# Single Number - Pseudocode Approaches

## Approach 1: XOR Operation

### High-level Idea
Use XOR to cancel out pairs of numbers, leaving only the single number.

### Detailed Pseudocode
```algorithm
function singleNumber(nums):
    // Initialize result to 0
    // (XOR with 0 gives number itself)
    result = 0
    
    // Process each number in array
    for each number in nums:
        // XOR current number with result
        // - If number appears twice, it will cancel out
        // - Single number will remain
        result = result XOR number
    
    // Return the single number
    return result

Example walkthrough:
nums = [4,1,2,1,2]
1. result = 0 ^ 4 = 4
2. result = 4 ^ 1 = 5
3. result = 5 ^ 2 = 7
4. result = 7 ^ 1 = 6
5. result = 6 ^ 2 = 4 (final answer)
```

## Alternative Approaches (Not Meeting Space Constraint)

### Approach 2: Hash Set
```algorithm
function singleNumber(nums):
    // Create empty set
    seen = empty set
    
    // Process each number
    for each number in nums:
        if number in seen:
            remove number from seen
        else:
            add number to seen
    
    // Return the only number in set
    return first element in seen

Space Complexity: O(n) - Not meeting constraint
```

### Approach 3: Sorting
```algorithm
function singleNumber(nums):
    // Sort array
    sort(nums)
    
    // Check pairs
    for i = 0 to length-2 step 2:
        if nums[i] != nums[i+1]:
            return nums[i]
    
    // If not found, last element is answer
    return nums[length-1]

Time Complexity: O(n log n) - Not optimal
```
