#include <iostream>
#include "this.h"

using namespace std;

int main(){
    // cout << "Hello world\n";
    // sum();

    //arithematic operators
    int a = 4, b = 5;

    cout << "a + b: " << a+b << endl;
    cout << "a - b: " << a-b << endl;
    cout << "a * b: " << a*b << endl;
    cout << "a / b: " << a/b << endl;
    cout << "a % b: " << a%b << endl;
    cout << "a++ : " << a++ << endl; // here the value of a will be printed and then increased by 1. but it will print the previous value of a. Post-increment
    cout << "a-- : " << a-- << endl; // here the value of a will be printed and then decreased by 1. this will print the incremented value from the above code and then decrease it
    cout << "++a : " << ++a << endl; // here the value of incremented a will be printed. This will first increase the value of a and then print it. Pre-increment 
    cout << "--a : " << --a << endl; // here the value of decremented a will be printed. This will first decrease the value of a and then print it.
    cout << endl;

    //assignment operator
    int num = 10;
    
    //comparison operator
    //Prints true or false. They are written in PARANTHESIS.
    cout << "a==b : " << (a==b) << endl;
    cout << "a!=b : " << (a!=b) << endl;
    cout << "a >= b : " << (a >= b) << endl;
    cout << "a <= b : " << (a <= b) << endl;
    cout << "a < b : " << (a < b) << endl;
    cout << "a > b : " << (a > b) << endl;    
    cout << endl;

    //logical operator
    int x = 10, y = 12;
    cout << "((x == y) && (x > y)) : " << ((x == y) && (x > y)) << endl; // && is the logical AND operator
    cout << "((x == y) || (x < y)) : " << ((x == y) || (x < y)) << endl; // || is the logical OR operator
    
    return 0;
}
