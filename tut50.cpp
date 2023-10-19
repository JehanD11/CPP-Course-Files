#include <iostream>

using namespace std;



int main(){
    int a = 45;
    int* ptr = &a;

    cout << "The value at address of ptr is = " << *ptr << endl;
    
    *ptr = 35;
    cout << "After updating the value of the ptr we have the value = " << *ptr << endl;

    int *p = new int(40);
    cout << "The value stored at address p is = " << *p << endl;

    delete p;
    cout << "After using delete the value returned is = " << *p << endl;

    int *arr = new int[3];
    arr[0] = 10;
    *(arr+1) = 20; //This is another technique to represent an array element. But only allowed in pointers
    arr[2] = 30;

    cout << "arr[0] = " << arr[0] <<endl;
    cout << "arr[1] = " << arr[1] <<endl;
    cout << "arr[2] = " << arr[2] <<endl;

    delete[] arr;

    cout << "After deleting the memory allocated to the list ->" << endl;
    cout << "arr[0] = " << arr[0] <<endl;
    cout << "arr[1] = " << arr[1] <<endl;
    cout << "arr[2] = " << arr[2] <<endl;
    return 0;
}