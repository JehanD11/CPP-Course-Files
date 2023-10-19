#include <iostream>

using namespace std;

// This is the base class for all programmer and prgrammer1 classes
class employee
{
public:
    float salary = 34000;
    int id;

//We have to create a default constructor because whenever this class is inherited, the constructor of the base class is called.
    employee(){}; 
    employee(int inpid)
    {
        id = inpid;
    }
};

// Here all the public members of the base class employee class will become the public members of the derived class programmer
class programmer : public employee
{

public:
    // int id; //Writing this is unnecessary as id is already the public memeber in this class
    programmer(int inpid)
    {
        id = inpid;
    }
};

// Here all the public members of the base class employee will become the provate members of the derived class programmer1
class programmer1 : private employee
{

public:
    programmer1(int inpid)
    {
        id = inpid;
    }
    // The function below needs to be created as we need to initialize the value as id is a private member in this class
    void getdata()
    {
        cout << id << " " << salary << endl;
    }
};

int main()
{

    employee x(1), y(2);
    cout << x.id << " " << y.id << endl;
    cout << x.salary << " " << y.salary << endl;

    programmer z(10);
    cout << z.id << " " << z.salary << endl;

    programmer1 a(100);
    a.getdata();
    // cout << a.id << " " << a.salary << endl; //This will give us an error as id and salary is a private member of this class
    return 0;
}