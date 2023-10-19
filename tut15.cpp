#include <iostream>

using namespace std;

int sum(int a, int b){
    int sum;
    sum = a + b;
    return sum;
}

//Function prototype - When we declare a function after our int main() then we have to declare a function prototype before int main()
//This lets the compiler know that this function exists in the code.
int subtract(int num1, int num2);

int main(){
    int num1, num2;
    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;

    cout << "The sum of the numbers is: " << sum(num1, num2) <<  endl;
    cout << "The difference between the numbers is: " << subtract(num1, num2) << endl;

    return 0;
}

int subtract(int num1, int num2){
    int sub;
    sub = num1 - num2;
    return sub;
}


