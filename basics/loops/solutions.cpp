#include <iostream>
using namespace std;

// Solution 1: Pattern Printing
void patternPrinting() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    
    cout << "\nRight Triangle Pattern:" << endl;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    cout << "\nNumber Pattern:" << endl;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    
    cout << "\nCharacter Pattern:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }
}

// Solution 2: Series Calculation
void seriesCalculation() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    // Sum of numbers
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "Sum of first " << n << " numbers: " << sum << endl;
    
    // Factorial
    int factorial = 1;
    for(int i = 1; i <= n; i++) {
        factorial *= i;
    }
    cout << "Factorial of " << n << ": " << factorial << endl;
    
    // Fibonacci series
    cout << "Fibonacci series up to " << n << " terms: ";
    int a = 0, b = 1;
    for(int i = 1; i <= n; i++) {
        cout << a << " ";
        int temp = a + b;
        a = b;
        b = temp;
    }
    cout << endl;
}

// Solution 3: Number Analysis
void numberAnalysis() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    // Factors
    cout << "Factors: ";
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    
    // Prime check
    bool isPrime = true;
    if(n <= 1) isPrime = false;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            isPrime = false;
            break;
        }
    }
    cout << n << " is " << (isPrime ? "prime" : "not prime") << endl;
    
    // Reverse number
    int reversed = 0, temp = n;
    while(temp > 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }
    cout << "Reversed number: " << reversed << endl;
}

// Solution 4: Array Operations
void arrayOperations() {
    int arr[100], n;
    
    cout << "Enter array size (max 100): ";
    cin >> n;
    
    cout << "Enter " << n << " elements:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Print elements
    cout << "Array elements: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Sum and average
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    float average = float(sum) / n;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    
    // Search element
    int search;
    cout << "Enter element to search: ";
    cin >> search;
    
    bool found = false;
    for(int i = 0; i < n; i++) {
        if(arr[i] == search) {
            cout << "Element found at index " << i << endl;
            found = true;
            break;
        }
    }
    if(!found) cout << "Element not found" << endl;
}

int main() {
    int choice;
    
    cout << "Choose program to run:" << endl;
    cout << "1. Pattern Printing" << endl;
    cout << "2. Series Calculation" << endl;
    cout << "3. Number Analysis" << endl;
    cout << "4. Array Operations" << endl;
    
    cout << "\nEnter choice (1-4): ";
    cin >> choice;
    
    switch(choice) {
        case 1: patternPrinting(); break;
        case 2: seriesCalculation(); break;
        case 3: numberAnalysis(); break;
        case 4: arrayOperations(); break;
        default: cout << "Invalid choice!" << endl;
    }
    
    return 0;
}
