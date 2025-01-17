#include <iostream>
#include <limits>
using namespace std;

// Solution 1: Type Conversion Demo
void typeConversionDemo() {
    // Integer to Float conversion
    int intNum = 10;
    float floatNum = float(intNum);    // Explicit conversion
    float autoFloat = intNum;          // Implicit conversion
    
    cout << "Integer value: " << intNum << endl;
    cout << "Float value (explicit): " << floatNum << endl;
    cout << "Float value (implicit): " << autoFloat << endl;
    
    // Float to Integer conversion (precision loss)
    float pi = 3.14159;
    int roundedPi = int(pi);
    
    cout << "\nOriginal float: " << pi << endl;
    cout << "Converted to int: " << roundedPi << " (precision lost)" << endl;
}

// Solution 2: Operator Precedence Demo
void operatorPrecedenceDemo() {
    int a = 5, b = 3, c = 2;
    
    // Without parentheses
    int result1 = a + b * c;
    cout << a << " + " << b << " * " << c << " = " << result1 << endl;
    
    // With parentheses
    int result2 = (a + b) * c;
    cout << "(" << a << " + " << b << ") * " << c << " = " << result2 << endl;
    
    // Complex expression
    int result3 = a * b + c * (a + b) / 2;
    cout << "Complex expression result: " << result3 << endl;
}

// Solution 3: Calculator Demo
void calculatorDemo() {
    float num1, num2;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    cout << "\nCalculator Results:" << endl;
    cout << "==================" << endl;
    cout << "Addition:       " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << "Subtraction:    " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    
    if(num2 != 0)
        cout << "Division:       " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    else
        cout << "Division:       Cannot divide by zero!" << endl;
}

// Solution 4: Boolean Logic Demo
void booleanLogicDemo() {
    bool a = true, b = false;
    
    cout << "Boolean Logic Truth Table" << endl;
    cout << "========================" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "a AND b = " << (a && b) << endl;
    cout << "a OR b  = " << (a || b) << endl;
    cout << "NOT a   = " << !a << endl;
    cout << "NOT b   = " << !b << endl;
    
    // Complex boolean expression
    bool result = (a || b) && !(a && b);
    cout << "(a OR b) AND NOT(a AND b) = " << result << endl;
}

int main() {
    int choice;
    
    cout << "Choose demo to run:" << endl;
    cout << "1. Type Conversion Demo" << endl;
    cout << "2. Operator Precedence Demo" << endl;
    cout << "3. Calculator Demo" << endl;
    cout << "4. Boolean Logic Demo" << endl;
    
    cout << "\nEnter choice (1-4): ";
    cin >> choice;
    
    switch(choice) {
        case 1: typeConversionDemo(); break;
        case 2: operatorPrecedenceDemo(); break;
        case 3: calculatorDemo(); break;
        case 4: booleanLogicDemo(); break;
        default: cout << "Invalid choice!" << endl;
    }
    
    return 0;
}
