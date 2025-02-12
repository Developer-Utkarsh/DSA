# Binary Number System in C++ 🔢

## Overview

Learn about binary numbers, their conversions, and representation of negative numbers in binary. This module covers fundamental concepts of binary number system and its implementation in C++.

## Core Concepts

### 1. Binary Number System
- A base-2 number system using only 0 and 1
- Each position represents a power of 2
- Example: Convert 13 to binary
  ```
  Let's break down 13 into powers of 2:
  13 = 8 + 4 + 0 + 1
  13 = (1×8) + (1×4) + (0×2) + (1×1)
  13 = (1×2³) + (1×2²) + (0×2¹) + (1×2⁰)
  Therefore, 13 in binary is 1101
  ```

### 2. Decimal to Binary Conversion
Let's convert 13 to binary step by step:
```
Step 1: Divide by 2, note remainder
13 ÷ 2 = 6  remainder 1
Step 2: Divide 6 by 2
6 ÷ 2 = 3   remainder 0
Step 3: Divide 3 by 2
3 ÷ 2 = 1   remainder 1
Step 4: Divide 1 by 2
1 ÷ 2 = 0   remainder 1

Read remainders from bottom to top: 1101
```

Here's how to do it in C++:
```cpp
int decimal2binary(int n){
    int binary = 0;
    int multiplier = 1;  // This will help us build the number

    while(n != 0){
        int remainder = n % 2;  // Get remainder (0 or 1)
        n = n / 2;             // Divide number by 2
        binary += remainder * multiplier;  // Add to result
        multiplier *= 10;      // Move to next position
    }
    return binary;
}
```

### 3. Binary to Decimal Conversion
Let's convert binary 1101 to decimal:
```
Position:    3 2 1 0
Number:      1 1 0 1
Value:       8 4 0 1
(1×2³) + (1×2²) + (0×2¹) + (1×2⁰)
8 + 4 + 0 + 1 = 13
```

Here's the C++ code:
```cpp
int binary2decimal(int n){
    int decimal = 0;
    int multiplier = 1;  // Represents power of 2

    while(n > 0){
        int digit = n % 10;    // Get last digit
        decimal += digit * multiplier;  // Add to result
        multiplier *= 2;       // Next power of 2
        n = n / 10;           // Remove last digit
    }
    return decimal;
}
```

### 4. Negative Numbers in Binary

#### 1's Complement
- To get 1's complement, just flip all bits (0→1, 1→0)
- Example:
  ```
  Number:     1011
  Flip bits:  0100  (This is 1's complement)
  ```

#### 2's Complement
- Used to represent negative numbers
- Steps:
  1. Flip all bits (1's complement)
  2. Add 1 to the result
- Example: Convert -5 to binary
  ```
  Step 1: Convert 5 to binary
  5 = 0101

  Step 2: Flip all bits (1's complement)
  0101 → 1010

  Step 3: Add 1
  1010 + 1 = 1011
  
  Therefore, -5 in binary is 1011
  ```

#### Converting Negative Binary to Decimal
When you see a binary number starting with 1, it's negative:
```
Given: 1011
Step 1: It starts with 1, so it's negative
Step 2: Flip all bits
1011 → 0100
Step 3: Add 1
0100 + 1 = 0101
Step 4: Convert to decimal
0101 = 5
Step 5: Add negative sign
Result: -5
```

## Tips for Beginners
1. Start with small positive numbers (0-15)
2. Practice converting numbers both ways
3. For negative numbers:
   - If binary starts with 1, it's negative
   - If binary starts with 0, it's positive
4. Use pen and paper to practice conversions

Remember: Take your time to understand each concept before moving to the next one!
