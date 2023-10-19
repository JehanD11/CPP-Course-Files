#include <iostream>

using namespace std;

class A
{
    int a, b;

public:
    void setdata(int a, int b)
    {
        b = b;
        this->a = a;
    }

    void getdata()
    {
        cout << "The value of a with this pointer is: " << a << endl;
        cout << "The value of b without this pointer is: " << b << endl;
    }

    A &setdata2(int a)
    {
        this->a = a;
        return *this;
    }

    void getdata2()
    {
        cout << "Value of a set when the function created is an object of the class: " << a << endl;
    }
};

int main()
{

    A a;
    a.setdata(4, 5);
    a.getdata();

    A b;
    b.setdata2(6).getdata2();
    return 0;
}