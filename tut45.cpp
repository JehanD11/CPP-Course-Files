#include <iostream>

using namespace std;

class student
{
protected:
    int rn;

public:
    void set_roll_number(int a);
    void print_number();
};

void student ::set_roll_number(int a)
{
    rn = a;
}

void student ::print_number()
{
    cout << "The roll number of the student is: " << rn << endl;
}

class test : virtual public student
{
protected:
    float maths, physics;

public:
    void set_marks(float, float);
    void print_marks();
};

void test ::set_marks(float m, float p)
{
    maths = m;
    physics = p;
}

void test ::print_marks()
{
    cout << "Your marks are" << endl;
    cout << "Maths: " << maths << endl;
    cout << "Physics: " << physics << endl;
}

class sports : virtual public student
{
protected:
    int score;

public:
    void set_score(int);
    void print_score();
};

void sports ::set_score(int sc)
{
    score = sc;
}

void sports ::print_score()
{
    cout << "The score for this student is: " << score << endl;
}

class result : public sports, public test
{
protected:
    float total;

public:
    void display();
};

void result ::display()
{
    total = maths + physics + score;
    print_number();
    print_marks();
    print_score();
    cout << "The result of the student is: " << total;
}

int main()
{

    result jehan;
    jehan.set_roll_number(10034);
    jehan.set_marks(98, 90);
    jehan.set_score(100);

    jehan.display();

    return 0;
}