#include <iostream>

using namespace std;

class base
{
protected:
    int a = 10;
    /*Protected members when derived protected become protected members of derived class.
     When derived private, become private members of derived class.
     When derived public remain protected members of derived class*/
private:
    int b;

public:
    int c = 1000;
    void printb()
    {
        b = 100;
        cout << b << endl;
    }
};

class derived : protected base
{
public:
    void printdata()
    {
        cout << a << endl;
        printb();
        cout << c << endl;
    }
};

int main()
{
    derived d;
    d.printdata();
    return 0;
}