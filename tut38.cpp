#include <iostream>

using namespace std;

class base
{
    int data1;

public:
    int data2;
    int getdata1();
    int getdata2();
    void setdata();
};

int base ::getdata1()
{
    return data1;
}

int base ::getdata2()
{
    return data2;
}

void base ::setdata()
{
    data1 = 10;
    data2 = 20;
}

class derived : public base
{
    int data3;

public:
    void process();
    void display();
};

void derived ::process()
{
    data3 = data2 * getdata1();
}

void derived ::display()
{
    // cout << "The value of data 1 is: " << data1 << endl; 

    /*Here this ^ code will not fetch us the value of data1 because to get the value of data1 we have to create another function.
    This is becuase the value data1 is a private member of the base class. Private memebers cannot be inherited*/

    cout << "The value of data 1 is: " << getdata1() << endl;
    cout << "The value of data 2 is: " << data2 << endl;
    cout << "The value of data 3 is: " << data3 << endl;
}

int main()
{
    derived d;
    d.setdata();
    d.process();
    d.display();

    return 0;
}