#include <iostream>

using namespace std;

class simple{
    int data1;
    int data2;
    int data3;

    public:
        //Default constructor
        simple(int a, int b = 2, int c = 3){
            data1 = a; 
            data2 = b; 
            data3 = c;
        }

        void printData();
};

void simple :: printData(){
    cout << "data1: " << data1 << " data2: " << data2 << " data3: " << data3 << endl;
}

int main(){

    simple c1(1,4,5);
    c1.printData();

    simple c2(3, 5);
    c2.printData();

    simple c3(1);
    c3.printData();

    return 0;
}