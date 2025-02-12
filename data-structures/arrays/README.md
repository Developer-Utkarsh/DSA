# Arrays in C++ 📊

Arrays are fundamental data structures that store elements of the same type in contiguous memory locations. They provide fast access to elements using indices.

## Table of Contents
- [Basic Concepts](#basic-concepts)
- [Operations](#operations)
- [Common Problems](#common-problems)
- [Practice Problems](#practice-problems)
- [Tips & Tricks](#tips--tricks)

## Basic Concepts

### Declaration & Initialization
```cpp
// Fixed-size array
int arr[5] = {1, 2, 3, 4, 5};

// Size determined by initializer
int arr[] = {1, 2, 3, 4, 5};

// Initialize all elements to 0
int arr[5] = {0};
```

### Memory Layout
- Elements stored in contiguous memory
- Zero-based indexing (first element at index 0)
- Fixed size (cannot change after declaration)
- Each element takes same amount of memory

## Operations

### 1. Basic Operations
```cpp
// Access element
int element = arr[index];    // O(1)

// Modify element
arr[index] = newValue;       // O(1)

// Print array
for(int i = 0; i < size; i++) {
    cout << arr[i] << " ";
}
```

### 2. Common Array Operations
```cpp
// Sum of elements
int sum = 0;
for(int i = 0; i < size; i++) {
    sum += arr[i];
}

// Count even numbers
int count = 0;
for(int i = 0; i < size; i++) {
    if(arr[i] % 2 == 0) count++;
}
```

## Common Problems

### 1. Basic Problems
- Print all elements
- Find sum of elements
- Count even/odd numbers
- Find maximum element
- Print elements at even positions

### 2. Easy Problems
- Print array in reverse
- Count positive/negative numbers
- Find element occurrence
- Check if element exists
- Print elements greater than x

### 3. Intermediate Problems
- Reverse the array
- Find second largest
- Remove duplicates
- Separate even/odd numbers
- Find missing number

## Practice Problems

1. **Very Basic Level**
   - Print all elements of array
   - Calculate sum of all elements
   - Count number of even elements
   - Find largest element
   - Print elements at even indices
   - [Single Number](https://leetcode.com/problems/single-number) - Great starter problem using XOR! (See our solution in `/leetcode/by-topic/arrays/single-number/`)

2. **Basic Level**
   - Print array in reverse order
   - Count positive numbers
   - Find if number exists in array
   - Print elements greater than a given number
   - Calculate average of all elements

3. **Easy Level**
   - Reverse the array elements
   - Count elements greater than x
   - Find smallest element
   - Count duplicate elements
   - Separate positive and negative numbers

## Tips & Tricks

1. **Array Basics**
   - Array index starts from 0
   - Last index is size-1
   - Check array bounds before access

2. **Common Mistakes**
   - Accessing invalid index
   - Forgetting array size
   - Not initializing array

3. **Good Practices**
   - Initialize arrays properly
   - Use meaningful variable names
   - Add comments for clarity

4. **Debugging Tips**
   - Print array to verify changes
   - Use small test cases first
   - Check loop conditions carefully

## Time Complexity

| Operation | Time Complexity |
|-----------|----------------|
| Access    | O(1)           |
| Traversal | O(n)           |
| Search    | O(n)           |
| Print     | O(n)           |

Remember:
> "Start with simple problems and gradually move to complex ones. Understanding basic array operations is key to becoming a good programmer."
