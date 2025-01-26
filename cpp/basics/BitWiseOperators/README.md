# Bitwise Operators in C++ 🔢

## Overview

Learn about bitwise operators and their applications in C++. These operators work at the bit level and are crucial for low-level programming, optimization, and certain algorithmic problems.

## Concepts Covered

### 1. Understanding Binary Numbers
Binary is the foundation of bitwise operations. Every number in computer memory is stored as binary (0s and 1s).

Example:
```
Decimal: 5
Binary:  00000101

Decimal: 3
Binary:  00000011
```

### 2. Basic Bitwise Operators

#### AND Operator (&)
- Returns 1 only if both bits are 1
- Truth table:
  ```
  0 & 0 = 0
  0 & 1 = 0
  1 & 0 = 0
  1 & 1 = 1
  ```
- Example:
  ```cpp
  5 & 3 = 1
  // 5: 00000101
  // 3: 00000011
  // &: 00000001 (1 in decimal)
  ```

#### OR Operator (|)
- Returns 1 if at least one bit is 1
- Truth table:
  ```
  0 | 0 = 0
  0 | 1 = 1
  1 | 0 = 1
  1 | 1 = 1
  ```
- Example:
  ```cpp
  5 | 3 = 7
  // 5: 00000101
  // 3: 00000011
  // |: 00000111 (7 in decimal)
  ```

#### XOR Operator (^)
- Returns 1 if bits are different
- Truth table:
  ```
  0 ^ 0 = 0
  0 ^ 1 = 1
  1 ^ 0 = 1
  1 ^ 1 = 0
  ```
- Example:
  ```cpp
  5 ^ 3 = 6
  // 5: 00000101
  // 3: 00000011
  // ^: 00000110 (6 in decimal)
  ```

#### Left Shift (<<)
- Shifts bits left by specified positions
- Each shift multiplies number by 2
- Example:
  ```cpp
  5 << 1 = 10
  // 5:    00000101
  // 5<<1: 00001010 (10 in decimal)
  ```

#### Right Shift (>>)
- Shifts bits right by specified positions
- Each shift divides number by 2
- Example:
  ```cpp
  5 >> 1 = 2
  // 5:    00000101
  // 5>>1: 00000010 (2 in decimal)
  ```

## Practice Questions

1. **Basic AND Operation**
   - Write a function to perform bitwise AND
   - Input: Two integers
   - Output: Result of AND operation
   ```cpp
   int bitwiseAND(int a, int b) {
       return a & b;
   }
   ```

2. **Basic OR Operation**
   - Write a function to perform bitwise OR
   - Input: Two integers
   - Output: Result of OR operation
   ```cpp
   int bitwiseOR(int a, int b) {
       return a | b;
   }
   ```

3. **Check Even/Odd**
   - Use bitwise AND to check if number is even
   - Input: Integer
   - Output: true if even, false if odd
   ```cpp
   bool isEvenBitwise(int num) {
       return (num & 1) == 0;
   }
   ```

4. **Get ith Bit**
   - Get value of ith bit in a number
   - Input: Number and bit position
   - Output: 0 or 1
   ```cpp
   int getIthBit(int num, int i) {
       return (num >> i) & 1;
   }
   ```

## Common Applications

1. **Flags and States**
   - Use bits to store multiple boolean values
   - Save memory by using single integer
   ```cpp
   int flags = 0;
   flags |= (1 << 2);  // Set 3rd bit
   if(flags & (1 << 2)) // Check if 3rd bit is set
   ```

2. **Fast Multiplication/Division**
   - Left shift for multiplication by 2
   - Right shift for division by 2
   ```cpp
   int multiplyBy2(int n) { return n << 1; }
   int divideBy2(int n) { return n >> 1; }
   ```

## Files in this Directory

1. `practice.cpp`: Contains practice problems for you to solve
2. `solutions.cpp`: Contains complete solutions with test cases
3. `README.md`: This file with concepts and explanations

## How to Practice

1. Start with understanding binary numbers
2. Read through operator explanations
3. Try problems in `practice.cpp`
4. Compare with `solutions.cpp`
5. Run the code to see results

## Tips for Success

1. Draw out binary numbers when learning
2. Practice converting decimal to binary
3. Start with simple operations (AND, OR)
4. Use cout to print intermediate results
5. Test with small numbers first

Remember: Bitwise operations are powerful tools for optimization and low-level programming!
