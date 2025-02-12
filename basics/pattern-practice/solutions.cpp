#include <iostream>
using namespace std;

// Basic Pattern 1: Square Pattern
void squarePattern(int n) {
    // Prints:
    // * * * *
    // * * * *
    // * * * *
    // * * * *
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Basic Pattern 2: Right Triangle
void rightTriangle(int n) {
    // Prints:
    // *
    // * *
    // * * *
    // * * * *
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Basic Pattern 3: Inverted Right Triangle
void invertedRightTriangle(int n) {
    // Prints:
    // * * * *
    // * * *
    // * *
    // *
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Number Pattern 1: Number Triangle
void numberTriangle(int n) {
    // Prints:
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

// Number Pattern 2: Number Square
void numberSquare(int n) {
    // Prints:
    // 1 1 1 1
    // 2 2 2 2
    // 3 3 3 3
    // 4 4 4 4
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// Character Pattern 1: Alphabet Triangle
void alphabetTriangle(int n) {
    // Prints:
    // A
    // A B
    // A B C
    // A B C D
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }
}

// Mixed Pattern 1: Alternate Numbers and Stars
void alternatePattern(int n) {
    // Prints:
    // 1
    // * *
    // 1 2 3
    // * * * *
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            if(i % 2 == 0)
                cout << "* ";
            else
                cout << j << " ";
        }
        cout << endl;
    }
}

// Advanced Pattern 1: Hollow Square
void hollowSquare(int n) {
    // Prints:
    // * * * *
    // *     *
    // *     *
    // * * * *
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == 1 || i == n || j == 1 || j == n)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

int main() {
    int choice, size;
    
    cout << "Pattern Printing Menu:" << endl;
    cout << "1. Square Pattern" << endl;
    cout << "2. Right Triangle" << endl;
    cout << "3. Inverted Right Triangle" << endl;
    cout << "4. Number Triangle" << endl;
    cout << "5. Number Square" << endl;
    cout << "6. Alphabet Triangle" << endl;
    cout << "7. Alternate Pattern" << endl;
    cout << "8. Hollow Square" << endl;
    
    cout << "\nEnter your choice (1-8): ";
    cin >> choice;
    cout << "Enter size: ";
    cin >> size;
    
    cout << "\nOutput Pattern:\n" << endl;
    
    switch(choice) {
        case 1: squarePattern(size); break;
        case 2: rightTriangle(size); break;
        case 3: invertedRightTriangle(size); break;
        case 4: numberTriangle(size); break;
        case 5: numberSquare(size); break;
        case 6: alphabetTriangle(size); break;
        case 7: alternatePattern(size); break;
        case 8: hollowSquare(size); break;
        default: cout << "Invalid choice!" << endl;
    }
    
    return 0;
}
