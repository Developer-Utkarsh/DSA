#include <iostream>
using namespace std;

// Basic Functions
void printHello() {
    cout << "Hello\n";
}

int sum(int a, int b) {
    return a + b;
}

int min2num(int a, int b) {
    return (a < b) ? a : b;
}

// Mathematical Functions
int sum2N(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int factorial(int n) {
    int factorial = 1;
    for(int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

int dgtsSum(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Advanced Functions
int nCr(int n, int r) {
    int nFact = factorial(n);
    int rFact = factorial(r);
    int nrFact = factorial(n-r);
    return nFact/(rFact * nrFact);
}

bool isPrime(int n) {
    if(n <= 1) return false;
    for(int i = 2; i <= n/2; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

void primeTill_N(int n) {
    for(int i = 2; i <= n; i++) {
        if(isPrime(i)) cout << i << " ";
    }
    cout << endl;
}

void fibonacci(int n) {
    int prev1 = 0, prev2 = 1;
    cout << prev1 << " " << prev2 << " ";
    for(int i = 2; prev1 + prev2 <= n; i++) {
        int sum = prev1 + prev2;
        cout << sum << " ";
        prev1 = prev2;
        prev2 = sum;
    }
    cout << endl;
}

int main() {
    // Test cases for all functions
    cout << "Testing Basic Functions:" << endl;
    printHello();
    cout << "Sum of 5 and 3: " << sum(5, 3) << endl;
    cout << "Minimum of 7 and 4: " << min2num(7, 4) << endl;
    
    cout << "\nTesting Mathematical Functions:" << endl;
    cout << "Sum till 5: " << sum2N(5) << endl;
    cout << "Factorial of 5: " << factorial(5) << endl;
    cout << "Sum of digits of 123: " << dgtsSum(123) << endl;
    
    cout << "\nTesting Advanced Functions:" << endl;
    cout << "5C2: " << nCr(5, 2) << endl;
    cout << "Is 17 prime? " << (isPrime(17) ? "Yes" : "No") << endl;
    cout << "Prime numbers till 20: ";
    primeTill_N(20);
    cout << "Fibonacci series till 50: ";
    fibonacci(50);
    
    return 0;
}
