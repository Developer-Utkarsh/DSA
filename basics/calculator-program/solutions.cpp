#include <iostream>
using namespace std;

// Solution 1: Simple Calculator
void simpleCalculator() {
    float num1, num2;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    cout << "\nResults:" << endl;
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    
    if(num2 != 0)
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    else
        cout << "Division by zero is not allowed!" << endl;
}

// Solution 2: Enhanced Calculator
void enhancedCalculator() {
    int num1, num2;
    
    cout << "Enter two integers:" << endl;
    cout << "Number 1: ";
    cin >> num1;
    cout << "Number 2: ";
    cin >> num2;
    
    cout << "\n===== Results =====" << endl;
    cout << "Addition:       " << num1 + num2 << endl;
    cout << "Subtraction:    " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 * num2 << endl;
    
    if(num2 != 0) {
        cout << "Division:       " << float(num1) / num2 << endl;
        cout << "Modulus:        " << num1 % num2 << endl;
    } else {
        cout << "Division:       Not possible (divide by zero)" << endl;
        cout << "Modulus:        Not possible (divide by zero)" << endl;
    }
}

// Solution 3: Menu Calculator
void menuCalculator() {
    float num1, num2;
    char operation;
    bool continue_calc = true;
    
    while(continue_calc) {
        cout << "\nCalculator Menu:" << endl;
        cout << "1. Addition (+)" << endl;
        cout << "2. Subtraction (-)" << endl;
        cout << "3. Multiplication (*)" << endl;
        cout << "4. Division (/)" << endl;
        cout << "5. Exit" << endl;
        
        cout << "\nChoose operation (1-5): ";
        cin >> operation;
        
        if(operation == '5') {
            continue_calc = false;
            continue;
        }
        
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        
        switch(operation) {
            case '1':
                cout << "Result: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                break;
            case '2':
                cout << "Result: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                break;
            case '3':
                cout << "Result: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                break;
            case '4':
                if(num2 != 0)
                    cout << "Result: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero!" << endl;
                break;
            default:
                cout << "Invalid operation!" << endl;
        }
    }
}

// Additional Challenge 1: Temperature Converter
void temperatureConverter() {
    float temp;
    char unit;
    
    cout << "Temperature Converter" << endl;
    cout << "Enter temperature: ";
    cin >> temp;
    cout << "Enter unit (C/F): ";
    cin >> unit;
    
    if(unit == 'C' || unit == 'c')
        cout << temp << "°C = " << (temp * 9/5) + 32 << "°F" << endl;
    else if(unit == 'F' || unit == 'f')
        cout << temp << "°F = " << (temp - 32) * 5/9 << "°C" << endl;
    else
        cout << "Invalid unit!" << endl;
}

// Additional Challenge 2: Simple Interest Calculator
void interestCalculator() {
    float principal, rate, time;
    
    cout << "Simple Interest Calculator" << endl;
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter interest rate (%): ";
    cin >> rate;
    cout << "Enter time (years): ";
    cin >> time;
    
    float interest = (principal * rate * time) / 100;
    float total = principal + interest;
    
    cout << "\nInterest Amount: " << interest << endl;
    cout << "Total Amount: " << total << endl;
}

// Additional Challenge 3: Discount Calculator
void discountCalculator() {
    float price, discount;
    
    cout << "Discount Calculator" << endl;
    cout << "Enter original price: ";
    cin >> price;
    cout << "Enter discount percentage: ";
    cin >> discount;
    
    float saved = (price * discount) / 100;
    float final_price = price - saved;
    
    cout << "\nYou save: " << saved << endl;
    cout << "Final price: " << final_price << endl;
}

int main() {
    int choice;
    
    cout << "Choose program to run:" << endl;
    cout << "1. Simple Calculator" << endl;
    cout << "2. Enhanced Calculator" << endl;
    cout << "3. Menu Calculator" << endl;
    cout << "4. Temperature Converter" << endl;
    cout << "5. Interest Calculator" << endl;
    cout << "6. Discount Calculator" << endl;
    
    cin >> choice;
    
    switch(choice) {
        case 1: simpleCalculator(); break;
        case 2: enhancedCalculator(); break;
        case 3: menuCalculator(); break;
        case 4: temperatureConverter(); break;
        case 5: interestCalculator(); break;
        case 6: discountCalculator(); break;
        default: cout << "Invalid choice!" << endl;
    }
    
    return 0;
}
