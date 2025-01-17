#include <iostream>
using namespace std;

// Solution 1: Grade Calculator
void gradeCalculator() {
    int marks;
    
    cout << "Enter marks (0-100): ";
    cin >> marks;
    
    if(marks < 0 || marks > 100) {
        cout << "Invalid marks!" << endl;
        return;
    }
    
    char grade;
    string message;
    
    if(marks >= 90) {
        grade = 'A';
        message = "Excellent!";
    } else if(marks >= 80) {
        grade = 'B';
        message = "Very Good!";
    } else if(marks >= 70) {
        grade = 'C';
        message = "Good!";
    } else if(marks >= 60) {
        grade = 'D';
        message = "Pass!";
    } else {
        grade = 'F';
        message = "Need improvement!";
    }
    
    cout << "Grade: " << grade << endl;
    cout << "Message: " << message << endl;
}

// Solution 2: Number Classifier
void numberClassifier() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    // Check positive/negative/zero
    if(num > 0)
        cout << "Positive number" << endl;
    else if(num < 0)
        cout << "Negative number" << endl;
    else
        cout << "Zero" << endl;
    
    // Check even/odd
    if(num % 2 == 0)
        cout << "Even number" << endl;
    else
        cout << "Odd number" << endl;
    
    // Check divisibility by 5
    if(num % 5 == 0)
        cout << "Divisible by 5" << endl;
    else
        cout << "Not divisible by 5" << endl;
}

// Solution 3: Menu System
void menuSystem() {
    int choice;
    
    do {
        cout << "\nMenu:" << endl;
        cout << "1. Say Hello" << endl;
        cout << "2. Print Numbers 1-5" << endl;
        cout << "3. Check Even/Odd" << endl;
        cout << "4. Exit" << endl;
        
        cout << "Enter choice (1-4): ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                cout << "Hello!" << endl;
                break;
            case 2:
                for(int i = 1; i <= 5; i++)
                    cout << i << " ";
                cout << endl;
                break;
            case 3:
                int num;
                cout << "Enter a number: ";
                cin >> num;
                cout << (num % 2 == 0 ? "Even" : "Odd") << endl;
                break;
            case 4:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while(choice != 4);
}

// Solution 4: Leap Year Checker
void leapYearChecker() {
    int year;
    
    cout << "Enter year: ";
    cin >> year;
    
    bool isLeapYear = false;
    string explanation;
    
    if(year % 4 == 0) {
        if(year % 100 == 0) {
            if(year % 400 == 0) {
                isLeapYear = true;
                explanation = "divisible by 400";
            } else {
                explanation = "divisible by 100 but not by 400";
            }
        } else {
            isLeapYear = true;
            explanation = "divisible by 4 but not by 100";
        }
    } else {
        explanation = "not divisible by 4";
    }
    
    cout << year << " is " << (isLeapYear ? "" : "not ") 
         << "a leap year (" << explanation << ")" << endl;
}

int main() {
    int choice;
    
    cout << "Choose program to run:" << endl;
    cout << "1. Grade Calculator" << endl;
    cout << "2. Number Classifier" << endl;
    cout << "3. Menu System" << endl;
    cout << "4. Leap Year Checker" << endl;
    
    cout << "\nEnter choice (1-4): ";
    cin >> choice;
    
    switch(choice) {
        case 1: gradeCalculator(); break;
        case 2: numberClassifier(); break;
        case 3: menuSystem(); break;
        case 4: leapYearChecker(); break;
        default: cout << "Invalid choice!" << endl;
    }
    
    return 0;
}
