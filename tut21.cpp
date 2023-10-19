#include <iostream>

using namespace std;

class employee{

    private:
        int a, b, c;
    
    public:
        int d, e;
    
        void setData(int a1, int b1, int c1); //Declaration of the function
        
        void getData(){
            cout << "The value of a is: " << a << endl;
            cout << "The value of b is: "<< b << endl;
            cout << "The value of c is: " << c << endl;
            cout << "The value of d is: " << d << endl;
            cout << "The value of e is: " << e << endl; 
        }
};

void employee :: setData(int a1, int b1, int c1) {
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    employee jehan;
    jehan.d = 10;
    jehan.e = 20;

    //jehan.a = 100; --> This will throw us an error as we declared a as private and hence cannot be accessed

    jehan.setData(1, 3, 5);

    jehan.getData();
    return 0;
} 