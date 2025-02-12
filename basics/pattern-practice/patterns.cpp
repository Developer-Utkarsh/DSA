#include <iostream>
using namespace std;

int main() {
    // This file is for practice and learning
    // You can write and test your pattern code here
    
    // Example: Simple Square Pattern
        // int n = 4;
        // for(int i = 0; i < n; i++) {
        //     for(int j = 0; j < n; j++) {
        //         cout << "*" << " ";
        //     }
        //     cout << endl;
        // }

    //  Simple Square Pattern with Characters

        // int n = 4;
        // for(int i = 0; i < n; i++) {
        //     char ch = 'A';
        //     for(int j = 0; j < n; j++) {
        //         cout << ch << " ";
        //         ch = ch + 1; // 65 (A) + 1 => 66 (B) => Goes ON
        //     }
        //     cout << endl;
        // }

    // Simple Square Pattern continous no.
        //     int n = 3;
        //     int no = 1;
        //     for(int i = 0; i < n; i++) {
        //         for(int j = 0; j < n; j++) {
        //             cout << no << " ";
        //             no++;
        //         }
        //         cout << endl;
        //     }        

    //  Simple Square Pattern with continous Characters

        // int n = 4;
        // char ch = 'A';
        // for(int i = 0; i < n; i++) {
        //     for(int j = 0; j < n; j++) {
        //         cout << ch << " ";
        //         ch = ch + 1; // 65 (A) + 1 => 66 (B) => Goes ON
        //     }
        //     cout << endl;
        // }

    // Triangle Pattern

        // int n = 4;

        // for (int i = 0; i < n; i++){
        //     for (int j = 0; j < i+1; j++){
        //         cout << "*";
        //     }
        //     cout << endl;
        // }

    // Triangle Pattern for Continous Nos.

        // int n = 4;

        // for (int i = 0; i < n; i++){
        //     for (int j = 0; j < i+1; j++){
        //         cout << i + 1;
        //     }
        //     cout << endl;
        // }

    //  Triangle Pattern with Characters

        // int n = 4;
        // char ch = 'A';
        // for(int i = 0; i < n; i++) {
        //     for(int j = 0; j < i+1; j++) {
        //         cout << ch << " ";
        //     }
        //     ch = ch + 1; // 65 (A) + 1 => 66 (B) => Goes ON
        //     cout << endl;
        // }


    // Triangle Pattern for  Nos.

        // int n = 4;

        // for (int i = 0; i < n; i++){
        //     for (int j = 0; j < i+1; j++){
        //         cout << j + 1;
        //     }
        //     cout << endl;
        // }
    // Reverse Triangle Pattern for  Nos.

        // int n = 4;

        // for (int i = 0; i < n; i++){
        //     for (int j = i+1; j > 0; j--){
        //         cout << j;
        //     }
        //     cout << endl;
        // }

    // Reverse Triangle Pattern for  Characters.

        // int n = 4;

        // for (int i = 0; i < n; i++){
        //     char ch = 'A' + i;
        //     for (int j = i+1; j > 0; j--){
        //         cout << ch;
        //         ch = ch - 1;
                
        //     }
        //     cout << endl;
        // }


    // Floyd's Triangle Pattern

        // int n = 4;
        // int no = 1;
        // for (int i = 0; i < n; i++){
        //     for (int j = 0; j < i+1; j++){
        //         cout << no;
        //         no++;
        //     }
        //     cout << endl;
        // }
    // Floyd's Triangle Pattern with characters

        // int n = 4;
        // char ch = 'A';
        // for (int i = 0; i < n; i++){
        //     for (int j = 0; j < i+1; j++){
        //         cout << ch;
        //         ch++;
        //     }
        //     cout << endl;
        // }

    // Inverted Triangle Pattern

        // int n = 4;

        // for(int i = 0; i < n; i++){

        //     for(int k = 0; k < i;k++){

        //         cout << " ";
        //     }

        //     for(int j = 0; j < n-i; j++){
        //         cout << i+1;
        //     }

        //     cout << endl;

        // }

    // Inverted Triangle Pattern for Characters

        // int n = 4;

        // char ch = 'A';
        // for(int i = 0; i < n; i++){
        //     for(int k = 0; k < i;k++){

        //         cout << " ";
        //     }

        //     for(int j = 0; j < n-i; j++){
        //         cout << ch;
        //     }

        //     cout << endl;

        //     ch = ch + 1;


        // }


    // Pyramid Pattern

        // int n = 4;

        // for(int i = 0; i < n; i++){
        //     // For Spaces
        //         for(int j=0; j<(n-i);j++){
        //             cout << " ";
        //         }

                // For Left Pyramid

        //         for(int k = 0; k < i+1; k++){
        //             cout << k+1;
        //         }

                // For Right Pyramid

        //         for(int l = i; l > 0 ; l-- ){
        //             cout << l;
        //         }

        //         cout << endl;

        // }


    //  Hollow Diamond Pattern


        // int n = 4;

        // For Top Hollow Triagle Stars

            // for(int i=0; i<n;i++){

            //      // For Spaces
            //         for(int j=0; j<(n-i)-1;j++){
            //             cout << " ";
            //         }

            //     cout << "*";

            //     if(i > 0){
            //     // For Center Spaces

            //         for(int k=0; k < (2*i)-1; k++){
            //             cout << " ";
            //         }        

            //         cout << "*";
            //     }       

            //     cout << endl;

            // }

        // For Bottom Hollow Triagle Stars


            // for(int i=n-2; i>=0;i--){

            //      // For Spaces
            //         for(int j=0; j<(n-i)-1;j++){
            //             cout << " ";
            //         }

            //     cout << "*";

            //     if(i > 0){
            //     // For Center Spaces

            //         for(int k=0; k < (2*i)-1; k++){
            //             cout << " ";
            //         }        

            //         cout << "*";
            //     }       

            //     cout << endl;

            // }

    // Butterfly Pattern

        int n = 4;

        // For Top Part Starts

            for(int i=0; i<n; i++){

                // For Left Stars

                    for(int j=0; j<i+1; j++){
                        cout << "*";
                    }

                if(i<n-1){

                // For Center Spaces


                     for(int k=0; k < ((2*(n-i))-1); k++){
                            cout << " ";
                        }    

                }else{
                    cout << "*";
                }
                // For Right Stars

                      for(int j=0; j<=i; j++){
                         cout << "*";
                     }    

                cout << endl;

            }
        // For Bottom Part Starts

            for(int i=0; i < n; i++){

                // For Left Stars

                    for(int j=0; j<(n-i); j++){
                        cout << "*";
                    }

                // For Center Spaces

                    if(i != 0){
                     for(int k=0; k < (2*i)+1; k++){
                            cout << " ";
                        }    

                    }else{
                    cout << "*";
                }

                // For Right Stars

                      for(int j=0; j<(n-i); j++){
                         cout << "*";
                     }    

                cout << endl;


            }



    return 0;
}
