# Data Types and Operators in C++ 📝

## Overview
Understanding data types and operators is fundamental to C++ programming. This section covers all basic and advanced concepts related to working with different types of data and performing operations on them.

## Detailed Concepts

### 1. Basic Data Types
#### Integer Types
- **int**: Basic integer type
  ```cpp
  int age = 25;              // Regular integer
  short smallNum = 123;      // Small integer
  long bigNum = 123456789L;  // Large integer
  ```
- Size ranges:
  - short: -32,768 to 32,767
  - int: -2,147,483,648 to 2,147,483,647
  - long: ±9.2e18

#### Floating Point Types
- **float**: Single precision
- **double**: Double precision
```cpp
float pi = 3.14159f;        // 7 decimal digits
double e = 2.718281828459;  // 15 decimal digits
```

#### Character Type
- **char**: Single character
```cpp
char grade = 'A';
char newline = '\n';
```
- ASCII values: 0-127
- Extended ASCII: 128-255

#### Boolean Type
- **bool**: true or false
```cpp
bool isStudent = true;
bool isPassed = false;
```

### 2. Type Modifiers
#### Signed/Unsigned
```cpp
unsigned int positiveOnly = 65535;  // 0 to 4,294,967,295
signed int withSign = -42;          // Can be negative
```

#### const Modifier
```cpp
const double PI = 3.14159;  // Value cannot be changed
const int DAYS = 7;         // Constant declaration
```

### 3. Operators in Detail

#### Arithmetic Operators
```cpp
int a = 10, b = 3;
cout << a + b;  // Addition: 13
cout << a - b;  // Subtraction: 7
cout << a * b;  // Multiplication: 30
cout << a / b;  // Division: 3
cout << a % b;  // Modulus: 1
```

#### Increment/Decrement
```cpp
int x = 5;
cout << ++x;  // Pre-increment: 6
cout << x++;  // Post-increment: 6 (then becomes 7)
cout << --x;  // Pre-decrement: 6
cout << x--;  // Post-decrement: 6 (then becomes 5)
```

#### Relational Operators
```cpp
int p = 5, q = 10;
cout << (p == q);  // Equal to: false
cout << (p != q);  // Not equal to: true
cout << (p < q);   // Less than: true
cout << (p > q);   // Greater than: false
cout << (p <= q);  // Less than or equal: true
cout << (p >= q);  // Greater than or equal: false
```

#### Logical Operators
```cpp
bool x = true, y = false;
cout << (x && y);  // Logical AND: false
cout << (x || y);  // Logical OR: true
cout << (!x);      // Logical NOT: false
```

#### Bitwise Operators
```cpp
int a = 5;  // 101 in binary
int b = 3;  // 011 in binary
cout << (a & b);   // Bitwise AND: 1
cout << (a | b);   // Bitwise OR: 7
cout << (a ^ b);   // Bitwise XOR: 6
cout << (~a);      // Bitwise NOT: -6
cout << (a << 1);  // Left shift: 10
cout << (a >> 1);  // Right shift: 2
```

## Practice Questions

1. **Basic Type Operations**
   - Create variables of different types
   - Perform basic arithmetic
   - Print results with proper formatting

2. **Type Conversion**
   - Convert between int and float
   - Handle character to integer conversion
   - Demonstrate explicit vs implicit conversion

3. **Operator Practice**
   - Use all arithmetic operators
   - Combine multiple operations
   - Show operator precedence

4. **Advanced Operations**
   - Work with bitwise operators
   - Use compound assignments
   - Handle type limits and overflow

## Additional Challenges

1. **Calculator Program**
   - Build a scientific calculator
   - Handle different numeric types
   - Include error checking

2. **Temperature Converter**
   - Convert between units
   - Handle decimal precision
   - Format output nicely

## Tips & Tricks
- Always initialize variables
- Use appropriate data types
- Watch for integer division
- Be careful with type conversions
- Use parentheses for complex expressions
- Check for potential overflow
- Format output for readability

## Common Pitfalls
1. Integer Division Truncation
2. Overflow/Underflow
3. Precision Loss
4. Implicit Conversion Issues
5. Uninitialized Variables

## Best Practices
1. Use meaningful variable names
2. Comment complex operations
3. Check for division by zero
4. Handle edge cases
5. Use consistent formatting
