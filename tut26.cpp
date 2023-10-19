#include <iostream>

using namespace std;

class complex{

    int a, b;

    public:

        friend complex sumComplex(complex o1, complex o2); 
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }

        void printNumber(){
            cout << a << " + " << b << "i" << endl;
        }

        void subComplex(complex o1, complex o2);
};

/*This is outside the class and if we want to accept this, we need to provide a permission. We need to declare that this fucntion is 
a friend function. Friend function helps the compiler understand that this fucntion is a part of the class and has the permission
to access its private members 
*/
complex sumComplex(complex o1, complex o2){

    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;

}


int main(){
    complex c1, c2, sum, sub;

    c1.setNumber(3, 6);
    c1.printNumber();

    c2.setNumber(4, 5);
    c2.printNumber();  
    
    cout << "-------" << endl;
    
    sum = sumComplex(c1, c2);
    sum.printNumber(); 
 
    return 0;

}