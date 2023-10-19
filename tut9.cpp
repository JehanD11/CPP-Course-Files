#include <iostream>

using namespace std;

int main(){
    //Selection control structure - if else-if else ladder structure
    int age;
    cout << "Enter your age:" << endl;
    cin >> age;
    if(age < 18){
        cout << "You are too young!" << endl;
    } else if(age == 18){
        cout << "You are a kid and will be given a kid pass" << endl;
    }else{
        cout << "You are welcome to my party!" << endl;
    }

    //Selection control structure - Switch control structure
    switch (age){

    case 18:
        cout << "You are a kid and will be given a kid pass" << endl;
        break;
    case 22:
        cout << "You are welcome to my party!" << endl;
        break;
    case 2:
        cout << "You are too young!" << endl;
        break;
    
    default:
        cout << "No special cases" << endl;
        break;
    }
    return 0;
}