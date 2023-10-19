#include <iostream>

using namespace std;

class base1
{
protected:
    int num1;

public:
    void setNum1(int);
};

void base1 ::setNum1(int a)
{
    num1 = a;
}

class base2
{
protected:
    int num2;

public:
    void setNum2(int);
};

void base2 ::setNum2(int a)
{
    num2 = a;
}

class base3
{
protected:
    int num3;

public:
    void setNum3(int);
};

void base3 ::setNum3(int a)
{
    num3 = a;
}

class derived : public base1, public base2, public base3
{
public:
    void display()
    {
        cout << "The value of num1 is: " << num1 << endl;
        cout << "The value of num2 is: " << num2 << endl;
        cout << "The value of num3 is: " << num3 << endl;
        cout << "The sum of num1 num2 and num3 is: " << num1 + num2 + num3 << endl;
    }
};

int main()
{

    derived d;
    d.setNum1(10);
    d.setNum2(20);
    d.setNum3(15);
    d.display();
    return 0;
}