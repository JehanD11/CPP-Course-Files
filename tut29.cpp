#include <iostream>

using namespace std;

class complex{
    int a, b;
    public:
        complex(void); //This is a constructor. It creates an object and they have the same name as class.
        void printdata(){
            cout << "The complex number is: " << a << " + " << b << "i" <<endl;
        }
};

complex :: complex(void){
    a = 10;
    b = 20;
}

int main(){

    complex c1, c2, c3;

    c1.printdata();
    c2.printdata();
    c3.printdata();

    return 0;
}