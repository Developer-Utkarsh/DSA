#include <iostream>
using namespace std;

int main() {
    // This file is for practice and learning
    // You can write and test your code here
    
    // Example: Print numbers 1 to 5 using different loops
    
    cout << "Using for loop:" << endl;
    for(int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;
    
    cout << "Using while loop:" << endl;
    int j = 1;
    while(j <= 5) {
        cout << j << " ";
        j++;
    }
    cout << endl;
    
    cout << "Using do-while loop:" << endl;
    int k = 1;
    do {
        cout << k << " ";
        k++;
    } while(k <= 5);
    cout << endl;
    
    return 0;
}
