#include <iostream>

using namespace std;

class base {
    public:
        int var_base = 1;
        virtual void display(){
            cout << "1 Displaying the base class variable var_base : " << var_base << endl;
        }  
};

class derived : public base {
    public:
        int var_derived = 2;
        void display(){
            cout << "2 Displaying the derived class variable var_derived : " << var_derived << endl;
            cout << "2 Displaying the derived class variable var_base : " << var_base << endl; 
        }
};

int main(){

    base *bptr;
    derived *dptr;

    base b;
    derived d;

    bptr = &d;
    
    bptr->display();
    dptr->display();

    return 0;
}