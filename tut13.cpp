#include <iostream>

using namespace std;

int main(){
    int marks[] = {23, 45, 56, 73};
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;


    int mathmarks[4];
    mathmarks[0] = 23;
    mathmarks[1] = 45;
    mathmarks[2] = 73; 
    mathmarks[3] = 56;
    
    //We can also change the values in the array. But we need to do it before the cout code is executed

    cout << "mathmarks[0] = " << mathmarks[0] << endl;
    cout << "mathmarks[1] = " << mathmarks[1] << endl;
    
    mathmarks[2] = 35;

    cout << "mathmarks[2] = " << mathmarks[2] << endl;
    cout << "mathmarks[3] = " << mathmarks[3] << endl;

    //accessing using for loop
    for(int i = 0; i < 4; i++){
        cout << "The marks of student " << i << " is: " <<  mathmarks[i] << endl;
    }

    //accessing using while loop
    int j = 0;
    while(j < 4){
        cout << "The marks of student " << j << " is: " <<  mathmarks[j] << endl;
        j++;
    }

    //accessing using do-while loop
    int k = 0;
    do{
        cout << "The marks of student " << k << " is: " <<  mathmarks[k] << endl;
        k++;
    }while(k < 4);
    return 0;

    //Pointer and arrays
    int* p = marks;
    for(int i = 0; i <= 3; i++){
        cout << "The value at marks[" << i << "] is: " << *(p + i) << endl;
    }

    
}