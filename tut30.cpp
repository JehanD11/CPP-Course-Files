#include <iostream>

using namespace std;

class complex{
    int a, b;

    public: 
        // complex(void); // This is a default constructor
        complex (int, int); // This is a parametrized constructor
        void printNumber(){
            cout << "The complex number is: " << a << " + " << b << "i" << endl;
        }
};

// complex :: complex(void) {
//     a = 0;
//     b = 0;
// }

complex :: complex(int x, int y) {
    a = x;
    b = y;
}

int main(){

    //There are 2 ways of calling this function.
    //First method is known as Implicit call
    complex a(4,6);
    a.printNumber();

    //Second is known as Explicit call
    complex b = complex(7, 8);
    b.printNumber();
    return 0;
}   