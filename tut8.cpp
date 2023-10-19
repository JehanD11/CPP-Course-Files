#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a = 45;

    cout << "The value of a was: " << a << endl;

    a = 34;
    cout << "The value of a is: " << a << endl;

    //***********CONSTANTS IN C++*************
    //For this we need to declare a const keyword which fixes the value for the particular variable.
    const int b = 30;
    cout << "The fixed value of b is : " << b << endl;

    //Now if we try to change the value of b then it will return a error
    b = 50; 
    cout << "This will return an assignment error as this variable is read-only" << b;

    //**********Manipulators in C++*************
    int a  = 10, b = 150 , c = 1200;

    cout << "The value of a without setw : " << a << endl;
    cout << "The value of b without setw : " << b << endl;
    cout << "The value of c without setw : " << c << endl;

    cout << "The value of a with setw: " << setw(4) << a << endl;
    cout << "The value of b with setw: " << setw(4) << b << endl;
    cout << "The value of c wiht setw: " << setw(4) << c << endl;

    return 0;
}