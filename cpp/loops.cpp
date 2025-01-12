#include <iostream>
using namespace std;

int main(){

    int till; // n
    
    cout << "Till which no.\n";

    cin >> till;


    // While Loop

        // int no = 1;
        // while(no <= till){
        //     // cout << no << endl;
        //     no++;
        // }
    
    // For Loop


        // for(int i=1; i <= till; i++ ){
        //     cout << i << endl;
        // }


    // (Ques) Sum till n:

        // int sum = 0;

        // With For Loop

            // for(int i =1; i<= till; i++){
            //     sum += i;

            // }

        // With While Loop

            // int i=1;
            // while(i<=till){
            //     sum += i;
            //     i++;
            // }

        // cout << "Sum: " <<sum << endl;

    // (Ques) Sum of odd no till n;

        // int oddSum = 0;

        // Using For Loop

            // for(int i =1;i<= till;i++){
            //     if (i%2 != 0){
            //         oddSum += i;
            //     }
            // }

        // Using While Loop

            // int i=1;

            // while(i<=till){
            //     if(i%2 != 0){
            //         oddSum += i;
            //     }
            //     i++;
            // }

        // cout << "Odd Sum: " << oddSum << endl;

    // (Ques) Sum of even no till n;

        // int evenSum = 0;

        // Using For Loop

            // for(int i =1;i<= till;i++){
            //     if (i%2 == 0){
            //         evenSum += i;
            //     }
            // }

        // Using While Loop

            // int i=1;

            // while(i<=till){
            //     if(i%2 == 0){
            //         evenSum += i;
            //     }
            //     i++;
            // }

        // cout << "Even Sum: " << evenSum << endl;


    // Do While Loop

        // int i=1;
        // do {
        //     cout << i << endl;
        //     i++;
        // }while(i <= till);


    // (Ques) Check if a number is prime or not:

        // bool isPrime = true;

        // for (int i=2;i*i<n;i++){
        //     if (till%i ==0){
        //         isPrime=false;
        //         break;
        //     }
        // }


        // cout << (isPrime ? "It is a prime no": "Is is non Prime no.") << endl;

    // Nested Loops


        // for (int i = 0;i<=till;i++){
        //     for(int j = 0;j<=i;j++){
        //         cout << "*";
        //     }
        //     cout << endl;
        // }




    // (Ques) Sum of all numbers from 1 to N which are divisible by 3

        // int divBy3Sum=0;
        
        // for(int i=1;i<=till;i++){
        //     if (i%3 == 0){
        //         divBy3Sum += i;
        //     }
        // }

        // cout << "3 factors no Sum: " << divBy3Sum << endl;

    // (Ques) Factorial of n ( factorial = 1 X 2 X 3 X 4 X ... X n );
        

        // int factorial=1;

        // for (int i = 2; i <= till;i++){
        //     factorial = factorial * i;
        // }


        // cout << "Factorial: " << factorial << endl;

    cout << "Completed \n";
    return 0;
}