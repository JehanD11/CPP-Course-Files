//AMBIGUITY example 1

#include <iostream>

using namespace std;

class base1 {
    public:
        void greet(){
            cout << "How are you?" << endl;
        }
};

class base2 {
    public:
        void greet(){
            cout << "Kaise ho?" << endl;
        }
};

class derived : public base1, public base2 {
    public:
        void greet(int a){
            if (a == 1){
                base1 :: greet();
            } else if (a == 2) {
                base2 :: greet();
            } else {
                cout << "Naa bruh you trippin!" << endl;
            }
        }

};


int main(){
    int a;

    derived d;

    cout << "Enter which base greet you want 1 or 2?: ";
    cin >> a;

    d.greet(a);

    return 0;
}