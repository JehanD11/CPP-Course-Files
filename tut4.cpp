#include <iostream>

using namespace std;
//global variable
int glo = 10;

void sum(){
    cout << glo << endl;

}

int main(){
    int a = 5, b = 6;
    float pi = 3.14;
    char c = 'u';

    //local variable
    int glo = 5;

    //sum() will print the global variable
    sum();
    
    //this is for local variable 
    cout << glo << endl;

    // cout << "The value of a is " << a << " and the value of b is " << b << endl;
    // cout << "the value of pi is " << pi << endl;
    // cout << "The character stored is " << c;
    return 0;
}