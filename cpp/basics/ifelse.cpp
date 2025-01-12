#include <iostream>
using namespace std;


int main(){

    char charc;

    cout << "Enter your character\n";

    cin >> charc;
    
    // if(charc >= 'a' && charc <= 'z'){
    //     cout << "Lowecase\n";
    // }else{
    //     cout << "Uppercase \n";
    // }


    cout << (charc >= 'a' && charc <= 'z' ? "Lowercase" : "Uppercase") << "\n"; 

    return 0;
}