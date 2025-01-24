#include <iostream>
using namespace std;


int printHello(){

    cout << "Hello \n";

    return 3;

}


int sum(double a,double b){
    int sum = a + b;
    return sum;
}


// Minimum of 2 Numbers

int min2num(double a,double b){ // Parametrs
    if(a>b){
        return b;
    }else{
        return a;
    }
}

// Ques: Sum till N

int sum2N(int n){

    int sum;

    for(int i = 1; i<=n;i++){
        sum = sum+i;
    }
    return sum;

}


// Ques: Calculate N factorial


int factorial(int n){
    int factorial = 1 ;


    for(int i=1; i<=n; i++){
        factorial = factorial * i;
    }
    return factorial;

}




// Ques: Sum of digits of n:



int dgtsSum(int n){

    int sum=0;
    int i = n;
    for(i;i>0;){
        // cout << i << endl;
        sum += i%10;
        i = i/10;
    }

    return sum;


}



// Ques: Calculate nCr binomial coefficient for n & r.


    // 
    //   [n
    //     C = n!/(r! (n-r)!)
    //      r]

int nCr(int n,int r){
        int nFactorial = factorial(n);

        int rFactorial = factorial(r);

        int nMinusRFactorial = factorial(n-r);

        

       

        return  nFactorial/(rFactorial*nMinusRFactorial);

}



// Ques: WAF to check if a number is prime or not.

    string isPrime(int n){

            bool isPrime = true;
            for(int i = 2; i < n/2 ; i++){

                if (n%i == 0){
                    isPrime = false;
                    break;
                }

            }

            return isPrime ? "True" : "False";

        }


// Ques: WAF to print all the prime no. till n.

    void primeTill_N(int n){

        for(int i=2; i <= n; i++){
            bool isPrime = true;

            for(int j = 2; j <= i/2 ; j++){

                if (i%j == 0){
                    isPrime = false;

                    break;
                }

            }

            if(isPrime == true){
                cout << i << endl;
            }

        }
    }


// Ques: Write a function to Print fibonacci till n.


    void fibonacci(int n){
        int prev1 = 0;
        int prev2 = 1;

        cout << prev1 << " ";
        cout << prev2 << " ";
        for(int i = 0; prev2 + prev1<=n;i++){
            int sum = prev1 + prev2;
            cout << sum << " ";
            int intialprev1 = prev1;
            prev1 =  prev2;
            prev2 = prev2 + intialprev1;
        }
        
        cout << endl;

    }



int main(){

    // Functions

        // int val = printHello();

        // cout << "val = " << printHello() << endl;


        // cout << "sum = " << sum(4,5) << endl;



        // cout << "minmum of 2 num = " << min2num(17,29) << endl; //arguements


        // cout << "sum till = " << sum2N(25) << endl;


        // cout << "factorial till = " << factorial(10) << endl;



        // cout << "Digits Sum = " << dgtsSum(454) << endl;
        // cout << "nCr binomial Coefficient = " << nCr(6,3) << endl;

        // cout << "Is Prime: " << isPrime(7) << endl;
        // primeTill_N(17);
        fibonacci(21);



    return 0;
}