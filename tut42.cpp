#include <iostream>
#include <cmath>

using namespace std;

class SimpleCalculator
{

protected:
    float num1, num2;

public:
    void sum();
    void sub();
    void div();
    void mul();
};

void SimpleCalculator ::sum()
{
    cout << "The sum of the values is: " << num1 + num2 << endl;
}

void SimpleCalculator ::sub()
{
    cout << "The subtraction of the values is: " << num1 - num2 << endl;
}

void SimpleCalculator ::mul()
{
    cout << "The product of these numbers is: " << num1 * num2 << endl;
}

void SimpleCalculator ::div()
{
    cout << "The division of these numbers is: " << num1 / num2 << endl;
}

class ScientificCalculator
{
protected:
    float num3, num4;

public:
    void SumOfSqr();
    void SumOfCub();
    void SumOfSqrt();
    void SumOfCbrt();
};

void ScientificCalculator ::SumOfSqr()
{
    cout << "The sum of the squares of the values is: " << (num3 * num3) + (num4 * num4) << endl;
}

void ScientificCalculator ::SumOfSqrt()
{
    cout << "The sum of the square roots of the values is: " << sqrt(num3) + sqrt(num4) << endl;
}

void ScientificCalculator ::SumOfCub()
{
    cout << "The sum of the cubes of the values is: " << (num3 * num3 * num3) + (num4 * num4 * num4) << endl;
}

void ScientificCalculator ::SumOfCbrt()
{
    cout << "The sum of cube roots of the values is: " << cbrt(num3) + cbrt(num4) << endl;
}

class HybridCalculator : public ScientificCalculator, public SimpleCalculator
{
public:
    void SimpleSetNum(float n1, float n2)
    {
        num1 = n1;
        num2 = n2;
    }

    void ScientificSetNum(float n3, float n4)
    {
        num3 = n3;
        num4 = n4;
    }
};

int main()
{
    int choice;
    float n1, n2;

    cout << "1.Simple calculator\n2.Scientific Calculator" << endl;
    cin >> choice;

    cout << "Enter the value of num1: ";
    cin >> n1;

    cout << "Enter the value of num2: ";
    cin >> n2;

    HybridCalculator calc;

    switch (choice)
    {
    case 1:
        calc.SimpleSetNum(n1, n2);
        cout << "The following operations were performed: " << endl;
        calc.sum();
        calc.sub();
        calc.mul();
        calc.div();
        break;

    case 2:
        calc.ScientificSetNum(n1, n2);
        cout << "The following operations were performed: " << endl;
        calc.SumOfSqr();
        calc.SumOfSqrt();
        calc.SumOfCub();
        calc.SumOfCbrt();
        break;

    default:
        cout << "Wrong choice!";
        break;
    }
    return 0;
}