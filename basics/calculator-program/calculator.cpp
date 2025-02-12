#include <iostream>
using namespace std;

int main() {

    cout << "Welcome to Calculator app \n";

    float a,b;

    cout << "Enter the first no.: \n";

    cin >> a;


    cout << "Enter the second no.: \n";

    cin >> b;

    float sum = a+b;
    float diff = a-b;
    float product = a*b;
    float division = a/b;
    int remainder = int(a)%int(b);

    cout << "Results:\n Sum: " << sum << "\n Difference: " << diff << "\n Product: " << product << "\n Division: " << division << "\n Remainder: "<< remainder << "\n";

    cout << "Thank You \n";

    return 0;   
}