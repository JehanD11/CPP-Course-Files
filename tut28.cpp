#include <iostream>

using namespace std;

// Forward declaration
class Y;

class X
{
    int data;
    friend void add(X, Y);

public:
    void setData(int value)
    {
        data = value;
    }
};

class Y
{
    int num;
    friend void add(X, Y);

public:
    void setData(int value)
    {
        num = value;
    }
};

void add(X o1, Y o2)
{
    cout << "The sum of both the numbers from the class is: " << o1.data + o2.num << endl;
}

int main()
{

    X x;
    Y y;

    x.setData(5);
    y.setData(3);

    add(x, y);
    
    return 0;
}