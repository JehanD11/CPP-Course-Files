#include <iostream>

using namespace std;
//swap function - call by value
void swapVal(int x, int y){
    cout << "The initial value of x is: " << x << " and the value of y is: " << y << endl;
    int temp = x;
    x = y;
    y = temp;
    cout << "The swapped value of x is: " << x << " and the vaalue of y is: " << y << endl;
}

//swap function - call by reference
void swapRef(int* x, int* y){
    cout << "The initial value of x is: " << *x << " and the value of y is: " << *y << endl;
    int temp = *x;
    *x = *y;
    *y = temp;
    cout << "The swapped value of x is: " << *x << " and the value of y is: " << *y << endl; 
}

void swapRefVariable(int &x, int &y){
    cout << "The initial value of x is: " << x << " and the value of y is: " << y << endl;
    int temp = x;
    x = y;
    y = temp;
    cout << "The swapped value of x is: " << x << " and the value of y is: " << y << endl;
}

int main() {

    int choice, x, y;
    cout << "1.Swap using call by value!\n2.Swap using call by reference!\n3.Swap using call by reference using reference variable\nEnter your choice: ";
    cin >> choice;

    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the value of y: ";
    cin >> y;

    switch(choice){
        case 1:
            swapVal(x, y);
            break;
        
        case 2:
            swapRef(&x , &y);
            break;
        
        case 3:
            swapRefVariable(x, y); 
            break;
        default:
            cout << "Wrong choice" << endl;
            break;
    }

    return 0;
}