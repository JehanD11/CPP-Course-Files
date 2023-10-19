#include <iostream>

using namespace std;

//initialisation list
/*
    class A{
        int a;
        int b;
        
        public:
            A(int i, int j) : a(i), b(j){
                //code
            }
    };

    The code below public inside the constructor is called the initiliaztion list. Here we are assigning the values with the constructor.
    We can also do it ourselves by typing a = i; b = j; in the //code section
*/

class test{
    int a, b;

    public:
        test(int i, int j) : a(i), b(j){
            cout << "Constructor called!" << endl;
            cout << "Value of a is = " << a << endl;
            cout << "Value of b is = " << b << endl; 
        }
};

int main(){

    test t(10, 20);

    return 0;
}