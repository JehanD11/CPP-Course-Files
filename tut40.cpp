#include <iostream>

using namespace std;

class student
{
protected:
    int roll_number;

public:
    void setRollNumber(int);
    void getRollNumber();
};

void student ::setRollNumber(int r)
{
    roll_number = r;
}

void student ::getRollNumber()
{
    cout << "Roll Number is: " << roll_number << endl;
}

class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void setMarks(float, float);
    void getMarks();
};

void exam ::setMarks(float m, float p)
{
    maths = m;
    physics = p;
}

void exam ::getMarks()
{
    cout << "Marks in maths are: " << maths << endl;
    cout << "Marks in physics are: " << physics << endl;
}

class result : public exam
{
    float percentage;

public:
    void display()
    {
        getRollNumber();
        getMarks();
        cout << "You have got: " << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{
    result jehan;
    jehan.setRollNumber(10034);

    jehan.setMarks(95, 92);

    jehan.display();

    return 0;
}