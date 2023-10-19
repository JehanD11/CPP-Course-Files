#include <iostream>

using namespace std;

class number
{
    int a;

public:
    number()
    {
        a = 0;
    }
    number(int num)
    {
        a = num;
    }

    number(number &obj)
    {
        cout << "Copy constructor called!" << endl;
        a = obj.a;
    }

    void display();
};

void number ::display()
{
    cout << "a: " << a << endl;
}

int main()
{

    number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    // This is a copy constructor which uses a previous object as an argument for a new object.
    /*Even if we dont code the copy constructor, we can still call the below constructor because when a constructor is
    created, a default copy constructor is assigned by the compiler.*/

    number z1(z);
    z1.display();

    z2 = z; // Copy constructor is not invoked but the value is assigned
    z2.display();

    number z3 = z; // Copy constructor invoked
    z3.display();

    return 0;
}