#include <iostream>

using namespace std;

class c2;

class c1{
    int val1;
    friend void swap(c1 &, c2 &);
    public:
        void setData(int value){
            val1 = value;
        }

        void printData(void){
            cout << "The value stored in class c1 is: " << val1 << endl;
        }
};

class c2{
    int val2;
    friend void swap(c1 &, c2 &);
    public: 
        void setData(int value){
            val2 = value;
        }

        void printData(void){
            cout << "the value stored in class c2 is: " << val2 << endl;
        }
};

void swap(c1 &x, c2 &y){
    int temp;
    temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main(){
    c1 o1;
    c2 o2;
    o1.setData(10);
    o2.setData(5);

    cout << "The values before swapping are:"<<endl;
    cout << endl;
    cout << "c1 = ";
    o1.printData();
    cout << "c2 = ";
    o2.printData();

    swap(o1, o2);
    cout << endl;
    cout << "The values after swapping are:" << endl;
    cout << endl;
    cout << "c1 = ";
    o1.printData();
    cout << "c2 = ";
    o2.printData();
    return 0;
}