#include <iostream>

using namespace std;

int main(){
    //Pointer is a data type which holds the address of other data types
    int a = 3;
    int* b = &a;
    cout <<"The adress of value of a is: " << b << endl;

    //Derreferencing operator
    cout << "The value of a at adress b is: " << *b << endl;
    
    //Pointer to pointer
    int** c = &b; //Pointer C is storing the address of another pointer b. For this we had to declare pointer to pointer variable hence the double asterisk operator
    
    cout << "The address of pointer b is: " << c << endl;
    cout << "just one asterisk c will give us the of address of value of a: " << *c << endl;
    cout << "The value stored at adress b is: " << **c << endl;
 
    return 0;
}