#include <iostream>

using namespace std;

class base1{
    int data1;

    public:
        base1(int a){
            data1 = a;
            cout << "Base 1 constructor called!" << endl;
        }

        void printdata1(){
            cout << "The value of data1 is = " << data1 << endl;
        }
};

class base2{
    int data2;

    public:
        base2(int a){
            data2 = a;
            cout << "Base 2 constructor is called!" << endl;
        }

        void printdata2(){
            cout << "The value of data2 is = " << data2 << endl;
        }
};

class derived : public base1, public base2{
    int derived1, derived2;

    public:
        derived(int a, int b, int c, int d) : base1(a), base2(b){
            derived1 = c;
            derived2 = d;
            cout << "Derived class constructor called!" << endl;
        }

        void printdataderived() {
            cout << "The value of derived1 is = " << derived1 << endl;
            cout << "The value of derived2 is = " << derived2 << endl;
        }
};

/*
order of execution of the constructors for 
    class derived : public base1, public base2 is:
base1() -> base2() -> derived()

if the inheritence was like:
    class derived : public base2, public base1 then:
base2() -> base1() -> derived()
*/

int main(){
    derived jehan(10, 20, 30, 40);

    jehan.printdataderived();
    jehan.printdata1();
    jehan.printdata2();

    return 0;
}