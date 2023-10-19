#include <iostream>

using namespace std;

class complex
{
    int real, imaginary;

public:
    void setData(int, int);
    void printdata();
};

void complex ::setData(int a, int b)
{
    real = a;
    imaginary = b;
}

void complex ::printdata()
{
    cout << "The value of the real part of the complex equation is = " << real << endl;
    cout << "The value of the imaginary part of the complex equation is = " << imaginary << endl;
}

int main()
{

    complex c1;

    complex *ptr = &c1; // We assigning the address of the existing object of the class

    complex *ptr2 = new complex; // We creating a new pointer object of the class

    complex *ptr3 = new complex;

    (*ptr).setData(1, 2);
    (*ptr).printdata();

    (*ptr2).setData(3, 4);
    (*ptr2).printdata();

    // The examples above and below both are similar. Below we have used the arrow operator.
    // The arrow operator is used to dereference the pointer.

    ptr3->setData(5, 6);
    ptr3->printdata();
    return 0;
}