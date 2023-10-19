#include <iostream>

using namespace std;

class addition{
    public:
    int a, b, c;
    void add(){
        
        cout << "Enter the first value: ";
        cin >> a;
        cout << "Enter the second value: ";
        cin >> b;

        c = a + b;
        cout << "The sum of these numbers are: " << c << endl;
    }
    void sub(){
        cout << "Enter the first value: " ;
        cin >> a;
        cout << "Enter the second value: ";
        cin >> b;

        c = a - b;
        cout << "The difference between these numbers is: " << c << endl;
    }
};



int main(){
    addition x, y;
    x.add().;
    y.sub();
    return 0;
}