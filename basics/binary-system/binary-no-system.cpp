#include <iostream>
using namespace std;
#include <cmath> // For Power Function

int decimal2binary(int n){
    int no=n;
    int binary=0;
    // Method 1: Using Power Function.
        // for(int i=0; no !=0; i++){
        //     int remainder = no%2;
        //     no = no/2;

        //     int power = pow(10, i); // Power Function Usage (no,power)
        //     binary += remainder*power;
        // }
    
    // Method 2 : Without Power Functions
        int multiplier = 1;
        for(int i=0; no !=0; i++){
            int remainder = n%2;
            no = no/2;
            binary += remainder*multiplier;
            multiplier *= 10;
        }

    return binary;
}

int binary2dicimal(int n){
    int decimal = 0;
    // Method 1: With Power Function
        // for(int i=0; n>0; i++){
        //     int digit = n%10;
        //     int power = pow(2, i); // Power Function Usage (no,power)

        //     decimal += digit * power;
        //     n = n / 10;
        // }

    // Method 2: Without Power Function;
        int multiplier = 1;
        for(int i=0; n>0; i++){
            int digit = n%10;

            decimal += digit * multiplier;
            multiplier *= 2;
            n = n / 10;
        }
    return decimal;
}



int main(){
    
    // cout << "Binary of Any No." << endl;
    cout << "Decimal of Any Binary no." << endl;
    
    int input = 0;
    cin >> input;

    // cout << decimal2binary(input);
    cout << binary2dicimal(input);
    cout << endl;

    return 0;
}