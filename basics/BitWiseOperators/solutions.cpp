#include <iostream>
using namespace std;

// 1. Basic AND operation
int bitwiseAND(int a, int b) {
    return a & b;
}

// 2. Basic OR operation
int bitwiseOR(int a, int b) {
    return a | b;
}

// 3. Basic XOR operation
int bitwiseXOR(int a, int b) {
    return a ^ b;
}

// 4. Left shift operation
int leftShift(int num, int positions) {
    return num << positions;
}

// 5. Right shift operation
int rightShift(int num, int positions) {
    return num >> positions;
}

// 6. Check if number is even using bitwise
bool isEvenBitwise(int num) {
    return (num & 1) == 0;
}

// 7. Get ith bit
int getIthBit(int num, int i) {
    return (num >> i) & 1;
}

// 8. Set ith bit
int setIthBit(int num, int i) {
    return num | (1 << i);
}

// 9. Clear ith bit
int clearIthBit(int num, int i) {
    return num & ~(1 << i);
}

// 10. Count set bits (1s) in a number
int countSetBits(int num) {
    int count = 0;
    while(num > 0) {
        count += num & 1;
        num = num >> 1;
    }
    return count;
}

// Main function with test cases
int main() {
    // Test AND operation
    cout << "Bitwise AND Tests:" << endl;
    cout << "5 & 3 = " << bitwiseAND(5, 3) << endl;  // Expected: 1
    cout << "12 & 10 = " << bitwiseAND(12, 10) << endl;  // Expected: 8
    
    // Test OR operation
    cout << "\nBitwise OR Tests:" << endl;
    cout << "5 | 3 = " << bitwiseOR(5, 3) << endl;  // Expected: 7
    cout << "12 | 10 = " << bitwiseOR(12, 10) << endl;  // Expected: 14
    
    // Test XOR operation
    cout << "\nBitwise XOR Tests:" << endl;
    cout << "5 ^ 3 = " << bitwiseXOR(5, 3) << endl;  // Expected: 6
    cout << "12 ^ 10 = " << bitwiseXOR(12, 10) << endl;  // Expected: 6
    
    // Test shifts
    cout << "\nShift Tests:" << endl;
    cout << "5 << 1 = " << leftShift(5, 1) << endl;  // Expected: 10
    cout << "5 >> 1 = " << rightShift(5, 1) << endl;  // Expected: 2
    
    // Test even/odd
    cout << "\nEven/Odd Tests:" << endl;
    cout << "Is 4 even? " << (isEvenBitwise(4) ? "Yes" : "No") << endl;  // Expected: Yes
    cout << "Is 7 even? " << (isEvenBitwise(7) ? "Yes" : "No") << endl;  // Expected: No
    
    // Test bit operations
    cout << "\nBit Operation Tests:" << endl;
    cout << "2nd bit of 12: " << getIthBit(12, 2) << endl;  // Expected: 1
    cout << "Set 1st bit of 10: " << setIthBit(10, 1) << endl;  // Expected: 10
    cout << "Clear 1st bit of 11: " << clearIthBit(11, 1) << endl;  // Expected: 9
    
    // Test count set bits
    cout << "\nCount Set Bits Tests:" << endl;
    cout << "Set bits in 7: " << countSetBits(7) << endl;  // Expected: 3
    cout << "Set bits in 12: " << countSetBits(12) << endl;  // Expected: 2
    
    return 0;
}
