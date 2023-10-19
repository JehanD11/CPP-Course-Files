#include <iostream>

using namespace std;

class employee
{

    int id, salary = 122;

public:
    void setID(void);
    void getID(void);
};

void employee ::setID(void)
{
    cout << "Enter the ID of the employee: " << endl;
    cin >> id;
}

void employee ::getID(void)
{
    cout << "The id of the employee is: " << id << endl;
}

class complex
{

    int a, b;

public:
    void setData(int v1, int v2);
    void setBySum(complex o1, complex o2);
    void printData();
};

void complex ::setData(int v1, int v2)
{
    a = v1;
    b = v2;
}

void complex ::setBySum(complex o1, complex o2)
{
    a = o1.a + o2.a;
    b = o1.b + o2.b;
}

void complex ::printData()
{
    cout << "The complex number is: " << a << " + " << b << "i" << endl;
}

int main()
{
    int choice;
    cout << "1. Pass the objects as an array\n2. Pass the objects as function arguement\nEnter your choice: ";
    cin >> choice;

    employee fb[4];
    complex n1, n2, n3;

    switch (choice)
    {
    case 1:

        for (int i = 0; i < 4; i++)
        {
            fb[i].setID();
            fb[i].getID();
        }
        break;

    case 2:

        n1.setData(1, 2);
        n1.printData();

        n2.setData(2, 3);
        n2.printData();

        n3.setBySum(n1, n2);
        n3.printData();

        break;

    default:
        cout << "Please enter correct choice!" << endl;
        break;
    }
}