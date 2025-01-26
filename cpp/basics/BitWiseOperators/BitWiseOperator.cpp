#include <iostream>
using namespace std;

// Ques: Find If a No. is Power of 2 or Not.
    // With Loops 
        int isPwrOf2(int n){
            bool isPwr = true;

            while(isPwr && n > 2){
                if(n%2 != 0){
                    isPwr = false;
                    break;
                }else{
                    n = n/2;
                }
            }

            return isPwr;

        } 
    // With bit wise operators

        bool isPowerOfTwo(int n) {
        // A power of 2 must be positive and satisfy n & (n - 1) == 0
        return n > 0 && (n & (n - 1)) == 0;
        }            

// Ques: WAF to reverse an Integer n


    int reverseNo(int n){
        int reversedNo = 0;
        // No. Of Digits of n
            int length = 0;
            int no = n;
            while(no > 0){
                length++;
                no = no / 10;
                
            }
        
        // cout << length << endl;
        int pwr = length;
        while(n > 0){
            int dgt = n%10;
            // calculate pwr value
                int value = 1;

                for(int i=1; i < pwr; i++){
                    value = value * 10;
                    // cout << i << endl;
                }

            reversedNo += dgt * value;
            pwr = pwr - 1;
            n = n/10;
        }
       return reversedNo; 
    }


int main(){

    int a = 6,b=10;

    // cout << (a & b) << endl; // Bitwise &(AND) of a,b


    // cout << (a | b) << endl; // BitWise |(OR) of a,b


    // cout << (a ^ b) << endl; // BitWise ^(XOR) of a,b



    // cout << (a << 1) << endl; // BitWise << (Left Shift) of a

    
    // cout << (a >> 1) << endl; // BitWise >> (Right Shift) of a


    // // Data Type Modifiers


    //     cout << sizeof(int) << endl;  // 4 Bytes
    //     cout << sizeof(long int) << endl; // 8 Bytes
    //     cout << sizeof(short int) << endl; // 2 Bytes
    //     cout << sizeof(long long int) << endl; // 8 Bytes
    //     cout << sizeof(unsigned int) << endl; // 4 Bytes (For Postive Value only)


       cout << "Is Power of 2: " << isPwrOf2(12) << endl; 
       cout << "Reverse No: " << reverseNo(377) << endl; 

    return 0;

}


