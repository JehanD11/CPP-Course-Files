#include <iostream>

using namespace std;

int c = 45; //global variable

int main() {
    int c = 10; //local variable

    cout << c << endl; //prints local variable
    
    cout << ::c << endl; //prints global variable
    // :: this is known as scope resolution operator

    //************REFERENCE VARIABLE*************
    int x = 20;
    int &y = x; //this is the reference variable. represented by &. This means we have created a different name for the same variable and the same value.
    cout << y;
    
    //********TYPECASTING********
    //typecasting means to convert one data type into another. For example float to int
    float a = 45.69;
    int b = 45;
    cout << "The int value of a is: " << (int)a << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a + int(b) = " << int(a) + b << endl;
    cout << "a + (int)b = " << (int)a + b << endl;   
    return 0;
}