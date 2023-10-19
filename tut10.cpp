#include <iostream>

using namespace std;

int main(){
    /*There are 3 types of loops in c++
        1. For loop
        2. While loop
        3. Do-while loop
    */

   //For loop
    int i = 0;
    for(i; i < 10; i++){
        cout << i << " ";
    }

    cout << endl;

    //While loop
    int j = 0;
    while(  j < 10){
        cout << j << " ";
        j++;
    }

    cout << endl;

    //Do-while loop
    int k = 0;
    do{
        cout << k << " ";
        k++;

    } while(k < 10);

    //Assignment - Print the table of 6 using all the three loops

    int choice, x = 0, y = 0, z = 0;
    cout << "Enter your choice:\n1. For loop\n2. While loop\n3. Do-while loop\nWhat is your choice: ";
    cin >> choice;

    switch(choice){
        case 1:
        for(x; x <= 12; x++){
            cout << "6 x " << x << " = " << x*6 << endl;
        }
        case 2:
        while(y <= 12){
            cout << "6 x " << y << " = " << y*6 << endl;
            y++;
        }
        case 3:
        do{
            cout << "6 x " << z << " = " << z*6 << endl;
            z++;
        } while(z <= 12);
    }
    return 0;
}
