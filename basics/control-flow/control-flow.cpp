#include <iostream>
using namespace std;

int main() {
    // This file is for practice and learning
    // You can write and test your code here
    
    // Example: Simple if-else
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    if(number > 0) {
        cout << "Positive number" << endl;
    } else if(number < 0) {
        cout << "Negative number" << endl;
    } else {
        cout << "Zero" << endl;
    }
    
    return 0;
}
