#include <iostream>

using namespace std;

class base {

    public:
        int var_base;
        void display(){
            cout << "Displaying the base class variable var_base : " << var_base << endl;
        }
};

class derived : public base {

    public:
        int var_derived;
        void display(){
            cout << "Displaying the derived class variable var_base : " << var_base << endl;
            cout << "Displaying the derived class variable var_derived : " << var_derived << endl;
        }
};

int main(){

    base *base_class_pointer;
    derived *derived_class_pointer;

    base b;
    derived d;

    base_class_pointer = &d;

    base_class_pointer->var_base = 34;
    base_class_pointer->display();

    derived_class_pointer->var_base = 3400;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();
    return 0;
}