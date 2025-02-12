# Functions in C++ 🔧

## Overview

Learn about functions - the building blocks of modular programming in C++. Functions help break down complex problems into smaller, manageable pieces.

## Concepts Covered

### 1. Function Basics

- Function declaration & definition
- Return types
- Parameters & arguments
- Function prototypes
- Void functions

### 2. Parameter Passing

- Pass by value
- Pass by reference
- Default parameters
- Constant parameters

### 3. Function Types

- Built-in functions
- User-defined functions
- Recursive functions
- Inline functions

## Basic Examples

```cpp
// Basic function with return
int sum(int a, int b) {
    return a + b;
}

// Void function
void printHello() {
    cout << "Hello\n";
}

// Function with multiple parameters
int min2num(int a, int b) {
    return (a < b) ? a : b;
}
```

## Practice Questions

1. **Basic Functions**

   - Write a function to print "Hello"
   - Create a function to add two numbers
   - Implement minimum of two numbers function
   <details>
   <summary>View Solution</summary>

   ```cpp
   // Print Hello
   void printHello() {
       cout << "Hello\n";
   }

   // Sum function
   int sum(int a, int b) {
       return a + b;
   }

   // Minimum of two numbers
   int min2num(int a, int b) {
       if(a > b) return b;
       return a;
   }
   ```

   </details>

2. **Mathematical Functions**

   - Calculate sum of numbers from 1 to N
   - Calculate factorial of a number
   - Calculate sum of digits of a number
   <details>
   <summary>View Solution</summary>

   ```cpp
   // Sum till N
   int sum2N(int n) {
       int sum = 0;
       for(int i = 1; i <= n; i++) {
           sum += i;
       }
       return sum;
   }

   // Factorial
   int factorial(int n) {
       int factorial = 1;
       for(int i = 1; i <= n; i++) {
           factorial *= i;
       }
       return factorial;
   }

   // Sum of digits
   int dgtsSum(int n) {
       int sum = 0;
       while(n > 0) {
           sum += n % 10;
           n /= 10;
       }
       return sum;
   }
   ```

   </details>

3. **Advanced Functions**

   - Calculate nCr (Binomial Coefficient)
   - Check if a number is prime
   - Print all prime numbers till N
   <details>
   <summary>View Solution</summary>

   ```cpp
   // nCr calculation
   int nCr(int n, int r) {
       int nFact = factorial(n);
       int rFact = factorial(r);
       int nrFact = factorial(n-r);
       return nFact/(rFact * nrFact);
   }

   // Check Prime
   bool isPrime(int n) {
       if(n <= 1) return false;
       for(int i = 2; i <= n/2; i++) {
           if(n % i == 0) return false;
       }
       return true;
   }

   // Print primes till N
   void primeTill_N(int n) {
       for(int i = 2; i <= n; i++) {
           if(isPrime(i)) cout << i << " ";
       }
   }
   ```

   </details>

   - Print Fibonacci series till N
   <details>
   <summary>View Solution</summary>

   ```cpp
   // Fibonacci Series
   void fibonacci(int n) {
       int prev1 = 0, prev2 = 1;
       cout << prev1 << " " << prev2 << " ";
       for(int i = 2; prev1 + prev2 <= n; i++) {
           int sum = prev1 + prev2;
           cout << sum << " ";
           prev1 = prev2;
           prev2 = sum;
       }
   }
   ```

   </details>

## Practice Files

- `practice.cpp`: Contains practice questions for you to solve
- `solutions.cpp`: Contains complete solutions with test cases

To practice:

1. Open `practice.cpp`
2. Try solving each question without looking at solutions
3. Compare your solutions with `solutions.cpp`
4. Run the solutions to see expected outputs

## Tips & Best Practices

1. Use meaningful function names
2. Keep functions small and focused
3. Document function purpose and parameters
4. Handle edge cases
5. Return appropriate values
6. Use const parameters when values shouldn't change
7. Avoid global variables
8. Test functions with different inputs

## Common Pitfalls

1. Not declaring function before use
2. Incorrect return types
3. Parameter type mismatch
4. Missing return statements
5. Stack overflow in recursion
6. Not handling edge cases

## Style Guide

```cpp
// Function prototype
returnType functionName(parameterType parameter);

// Function definition
returnType functionName(parameterType parameter) {
    // Function body
    return value;  // if non-void
}

// Example
int calculateSum(const int a, const int b) {
    return a + b;
}
```

## Advanced Topics

1. Function Pointers
2. Lambda Functions
3. Templates
4. Friend Functions
5. Virtual Functions

Remember: Functions are the building blocks of procedural programming. Master them to write clean, reusable, and maintainable code!
