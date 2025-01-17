# Control Flow in C++ 🔄

## Overview
Learn how to control program flow using conditional statements and loops.

## Concepts Covered
1. If Statements
   - if
   - if-else
   - else if
   - nested if

2. Switch Statement
   - case labels
   - break statement
   - default case

3. Conditional Operator
   - Ternary operator (?:)
   - Short-circuit evaluation

## Basic Examples
```cpp
// If-else example
int age = 18;
if(age >= 18) {
    cout << "Adult";
} else {
    cout << "Minor";
}

// Switch example
char grade = 'A';
switch(grade) {
    case 'A': cout << "Excellent"; break;
    case 'B': cout << "Good"; break;
    default: cout << "Keep trying"; break;
}

// Ternary operator
int num = 5;
string result = (num % 2 == 0) ? "Even" : "Odd";
```

## Practice Questions

1. **Grade Calculator**
   - Input marks (0-100)
   - Calculate grade (A, B, C, D, F)
   - Show appropriate message

2. **Number Classifier**
   - Check if positive/negative/zero
   - Check if even/odd
   - Check if divisible by 5

3. **Menu System**
   - Show multiple options
   - Take user choice
   - Perform selected operation

4. **Leap Year Checker**
   - Input year
   - Check if leap year
   - Show result with explanation

## Additional Challenges
1. **Calculator with Error Handling**
   - Handle division by zero
   - Validate input ranges
   - Show appropriate error messages

2. **Season Detector**
   - Input month and day
   - Determine season
   - Handle invalid dates

## Tips
- Use clear conditions
- Don't forget break in switch
- Consider all possible cases
- Use proper indentation
