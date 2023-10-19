#include <iostream>

using namespace std;

inline int product(int a, int b){
    return a*b;
}

int main(){
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    cout << "The product of these two numbers is: " << product(a, b) << endl;
    cout << "The product of these two numbers is: " << product(a, b) << endl;
    cout << "The product of these two numbers is: " << product(a, b) << endl;
    cout << "The product of these two numbers is: " << product(a, b) << endl;
    return 0;   
}