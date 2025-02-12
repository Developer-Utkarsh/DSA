# Remove Duplicates from Sorted Array - Solution Guide

## Understanding the Problem 🤔

Before diving into the solution, let's break down what we're trying to achieve:

1. We have a sorted array with duplicates
2. We need to remove duplicates "in-place" (can't use extra array)
3. The order must be preserved
4. Return the count of unique elements

Example: [0,0,1,1,1,2,2,3,3,4] → [0,1,2,3,4,_,_,_,_,_]

## Key Insights 💡

1. Since the array is sorted, all duplicates will be next to each other

   - [0,0,1,1,1] - notice how duplicates are adjacent
   - This means we don't need to search the whole array for duplicates!

2. "In-place" modification means:
   - Can't create new array
   - Must modify existing array
   - Challenge: How to overwrite duplicates without losing data?

## Solution Strategy 🎯

Think about using two pointers:

- Why two pointers?
  - One to keep track of where we'll put the next unique element
  - One to scan through the array looking for unique elements

## Hint for Implementation 🔍

```algorithm
Think about these steps:

1. Initialize pointers
   - Where should they start?
   - What does each pointer represent?

2. Moving through array
   - When do we move each pointer?
   - What happens when we find a new unique element?
   - How do we know it's unique?

3. Updating array
   - When do we modify the array?
   - What elements do we copy and where?

4. Final result
   - What should we return?
   - Why add 1 to the count?
```

## Visualization of Process 🖼️

Initial Array: [0,0,1,1,1,2,2,3,3,4]

```
Step 1: Both pointers at start
[0],0,1,1,1,2,2,3,3,4
 ↑
 Both pointers

Step 2: Current pointer finds new element
[0],0,1,1,1,2,2,3,3,4
 ↑ ↑
 u c

Step 3: Move unique pointer, copy element
[0,1],1,1,2,2,3,3,4
   ↑   ↑
   u   c

And so on...
```

## Questions to Ask Yourself 🤔

1. Why does this work?

   - Think about what happens to duplicates
   - Why don't we lose any unique elements?

2. Edge cases to consider:

   - Empty array?
   - Array with no duplicates?
   - Array with all duplicates?

3. Efficiency:
   - Why is this O(n) time?
   - Why is this O(1) space?

## Challenge! 💪

Before looking at the solution:

1. Try implementing this yourself
2. Test with different examples
3. Consider edge cases
4. Think about how to optimize

Remember: The key is understanding why two pointers help us solve this efficiently!
