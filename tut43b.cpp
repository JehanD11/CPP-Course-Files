//AMBIGUITY example 2

#include <iostream>

using namespace std;

class base {
    public:
        void say(){
            cout << "Hello world" << endl;
        }
};

class derived : public base {
    public:
        void say(){
            cout << "Goodbye world" << endl;
        }
};

int main(){

    base b;
    b.say();

    derived d;
    d.say();

    /*Here what happens is, since both the classes have the same function name, when we call the function using object of the base class
    it calls the function of the base class. Now if we call the function using derived class object it will call the overwritten 
    function. This is how the ambiguity is solved by itself here IN THIS example.*/
    return 0;
}