#include <iostream>

using namespace std;

// Forward declaration
class complex;

class calculator
{

public:
    int add(int a, int b)
    {
        return a + b;
    }

    int sumRealComplex(complex o1, complex o2);
    int sumCompComplex(complex o1, complex o2);
};

class complex
{
    int a, b;
    // Friend the class calculator so it can use the private memebers of this class
    // This is the way to declare friend fucntions individually of the class calculator.
    // friend int calculator ::sumRealComplex(complex o1, complex o2);
    // friend int calculator ::sumCompComplex(complex o1, complex o2);

    // Declaring the entire class calculator as friend
    friend class calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumRealComplex(complex o1, complex o2)
{
    return o1.a + o2.a;
}

int calculator ::sumCompComplex(complex o1, complex o2)
{
    return o1.b + o2.b;
}

int main()
{

    complex x, y;
    calculator rel, com;

    x.setNumber(1, 3);
    y.setNumber(2, 6);

    x.printNumber();
    y.printNumber();

    int res = rel.sumRealComplex(x, y);
    cout << "The sum of the real part of both the complex equations are: " << res << endl;

    res = com.sumCompComplex(x, y);
    cout << "The sum of the complex part of both the complex numbers are: " << res << endl;
    return 0;
}