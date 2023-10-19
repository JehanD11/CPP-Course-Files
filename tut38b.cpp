#include <iostream>
using namespace std;

class base
{
    int data1;
public:
    int data2;
    void setData();
    int getdata1();
    int getdata2();
};

void base ::setData()
{
    data1 = 10;
    data2 = 20;
}

int base ::getdata1()
{
    return data1;
}

int base ::getdata2()
{
    return data2;
}

class derived : private base
{
    int data3;

public:
    void process();
    void display();
};

void derived ::process()
{
    setData();
    data3 = data2 * getdata1();
}

void derived ::display()
{
    cout << "data1 = " << getdata1() << endl;
    cout << "data2 = " << data2 << endl;
    cout << "data3 = " << data3 << endl;
}

int main()
{

    derived d;
    d.process();
    d.display();

    return 0;
}