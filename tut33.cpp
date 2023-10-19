#include <iostream>

using namespace std;

class bank
{

    int principal;
    int interest;
    int years;
    int returnValue;

public:
    bank(){};
    bank(int p, int r, int y);
    bank(int p, float r, int y);

    void show();
};

bank :: bank(int p, int r, int y)
{
    principal = p;
    interest = float(r) / 100;
    years = y;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interest);
    }
}

bank :: bank(int p, float r, int y)
{
    principal = p;
    interest = r;
    years = y;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interest);
    }
}

void bank ::show()
{
    cout << "The Principal value was = " << principal << "\nAnd the return value after " << years << "years\nIs going to be = "
         << returnValue << endl;
}

int main()
{

    bank b1, b2;
    int p, r, y;
    float R;

    cout << "Enter the principal value : ";
    cin >> p;

    cout << "\nEnter the number of years : ";
    cin >> y;

    cout << "\nEnter the rate of interest : ";
    cin >> R;

    b1 = bank(p, R, y);
    b1.show();

    cout << "Enter the principal value : ";
    cin >> p;

    cout << "\nEnter the number of years : ";
    cin >> y;

    cout << "\nEnter the rate of interest : ";
    cin >> r;

    b2 = bank(p, r, y);
    b2.show();
    return 0;
}