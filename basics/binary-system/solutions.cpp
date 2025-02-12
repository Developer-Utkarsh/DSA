#include <iostream>
#include <bitset>
using namespace std;

// Solution 1: Decimal to Binary
string decimal2Binary(int n) {
    if (n == 0) return "0";
    
    string binary = "";
    bool isNegative = n < 0;
    n = abs(n);
    
    while (n > 0) {
        binary = to_string(n % 2) + binary;
        n = n / 2;
    }
    
    if (isNegative) {
        // Convert to 8-bit binary and find 2's complement
        while (binary.length() < 8) binary = "0" + binary;
        // Find 1's complement
        for (char &c : binary) c = (c == '0') ? '1' : '0';
        // Add 1 for 2's complement
        int carry = 1;
        for (int i = binary.length() - 1; i >= 0 && carry; i--) {
            if (binary[i] == '1') {
                binary[i] = '0';
            } else {
                binary[i] = '1';
                carry = 0;
            }
        }
    }
    
    return binary;
}

// Solution 2: Binary to Decimal
int binary2Decimal(string binary) {
    int decimal = 0;
    int base = 1;
    
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += base;
        }
        base *= 2;
    }
    
    return decimal;
}

// Solution 3: Binary Addition
string addBinary(string a, string b) {
    string result;
    int carry = 0;
    int i = a.length() - 1;
    int j = b.length() - 1;
    
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        result = char('0' + sum % 2) + result;
        carry = sum / 2;
    }
    
    return result;
}

// Solution 4: 1's Complement
string onesComplement(string binary) {
    for (char &c : binary) {
        c = (c == '0') ? '1' : '0';
    }
    return binary;
}

// Solution 5: 2's Complement
string twosComplement(string binary) {
    // First find 1's complement
    binary = onesComplement(binary);
    
    // Add 1 to get 2's complement
    int carry = 1;
    for (int i = binary.length() - 1; i >= 0 && carry; i--) {
        if (binary[i] == '1') {
            binary[i] = '0';
        } else {
            binary[i] = '1';
            carry = 0;
        }
    }
    
    return binary;
}

// Solution 6: Count Set Bits
int countSetBits(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

// Solution 7: Check Power of 2
bool isPowerOf2(int n) {
    if (n <= 0) return false;
    return (n & (n - 1)) == 0;
}

// Solution 8: Toggle Bits in Range
int toggleBitsRange(int n, int l, int r) {
    int mask = ((1 << (r - l + 1)) - 1) << (l - 1);
    return n ^ mask;
}

// Solution 9: Negative Decimal to Binary
string negativeDecimal2Binary(int n) {
    if (n >= 0) return decimal2Binary(n);
    return decimal2Binary(n);  // Our decimal2Binary already handles negative numbers
}

// Solution 10: Position of Rightmost Set Bit
int getRightmostSetBit(int n) {
    if (n == 0) return 0;
    return log2(n & -n) + 1;
}

int main() {
    int choice;
    
    cout << "Binary Operations Menu:" << endl;
    cout << "1. Decimal to Binary" << endl;
    cout << "2. Binary to Decimal" << endl;
    cout << "3. Binary Addition" << endl;
    cout << "4. 1's Complement" << endl;
    cout << "5. 2's Complement" << endl;
    cout << "6. Count Set Bits" << endl;
    cout << "7. Check Power of 2" << endl;
    cout << "8. Toggle Bits in Range" << endl;
    cout << "9. Negative Decimal to Binary" << endl;
    cout << "10. Position of Rightmost Set Bit" << endl;
    
    cout << "\nEnter your choice (1-10): ";
    cin >> choice;
    
    switch(choice) {
        case 1: {
            int n;
            cout << "Enter decimal number: ";
            cin >> n;
            cout << "Binary: " << decimal2Binary(n) << endl;
            break;
        }
        case 2: {
            string binary;
            cout << "Enter binary number: ";
            cin >> binary;
            cout << "Decimal: " << binary2Decimal(binary) << endl;
            break;
        }
        case 3: {
            string a, b;
            cout << "Enter first binary number: ";
            cin >> a;
            cout << "Enter second binary number: ";
            cin >> b;
            cout << "Sum: " << addBinary(a, b) << endl;
            break;
        }
        case 4: {
            string binary;
            cout << "Enter binary number: ";
            cin >> binary;
            cout << "1's Complement: " << onesComplement(binary) << endl;
            break;
        }
        case 5: {
            string binary;
            cout << "Enter binary number: ";
            cin >> binary;
            cout << "2's Complement: " << twosComplement(binary) << endl;
            break;
        }
        case 6: {
            int n;
            cout << "Enter number: ";
            cin >> n;
            cout << "Number of set bits: " << countSetBits(n) << endl;
            break;
        }
        case 7: {
            int n;
            cout << "Enter number: ";
            cin >> n;
            cout << (isPowerOf2(n) ? "Yes" : "No") << endl;
            break;
        }
        case 8: {
            int n, l, r;
            cout << "Enter number and range (l r): ";
            cin >> n >> l >> r;
            cout << "Result: " << toggleBitsRange(n, l, r) << endl;
            break;
        }
        case 9: {
            int n;
            cout << "Enter negative number: ";
            cin >> n;
            cout << "Binary: " << negativeDecimal2Binary(n) << endl;
            break;
        }
        case 10: {
            int n;
            cout << "Enter number: ";
            cin >> n;
            cout << "Position: " << getRightmostSetBit(n) << endl;
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
    }
    
    return 0;
}
