#include <iostream>

using namespace std;

class complex
{
    int x, y;
    friend void add(complex, complex);

public:

    //Constructor overloading

    complex()
    {
        x = 0;
        y = 0;
    }

    complex(int a)
    {
        x = a;
        y = 0;
    }

    complex(int a, int b)
    {
        x = a;
        y = b;
    }

    void print()
    {
        cout << "The complex number is " << x << " + " << y << "i" << endl;
    }
};

void add(complex o1, complex o2)
{
    cout << "The sum between these complex numbers is " << o1.x + o2.x << " + " << o1.y + o2.y << "i" << endl;
}

int main()
{

    complex c1;
    c1.print();

    complex c2(2);
    c2.print();

    complex c3(3, 4);
    c3.print();

    add(c2, c3);
    return 0;
}