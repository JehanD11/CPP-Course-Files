#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

string addBigNumbers(string number1, string number2) {
    if (number1.length() > number2.length()){
        swap(number1, number2);
    }

    string sum = "";
    int len1 = number1.length();
    int len2 = number2.length();
    int digitDiff = len2 - len1;
    int carry = 0;
    int intSum;
    for (int i=len1-1; i>=0; i--) {
        intSum = ((number1[i]-'0') + (number2[i+digitDiff]- '0') + carry);
        sum.push_back(intSum%10 + '0');
        carry = intSum/10;
    }
    for (int i=digitDiff-1; i>=0; i--) {
        intSum = ((number2[i]-'0')+carry);
        sum.push_back(intSum%10 + '0');
        carry = intSum/10;
    }
    if (carry)
    sum.push_back(carry+'0');
    reverse(sum.begin(), sum.end());
return sum;
}

int main() {
    string t11 = "1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111";
    string t12 = "2222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222";

    string t21 = "1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111";
    string t22 = "222222222222222222222222222222222222222222222222222222222222222222222222222222222222";

    string t31 = "1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111";
    string t32 = "-2222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222";


   cout<<"Sum of test case 1\n"<<addBigNumbers(t11,t12) << endl;
   cout << "Sum of test case 2\n" << addBigNumbers(t21,t22) << endl;
   cout << "Sum of test case 3\n" << addBigNumbers(t31, t32) << endl;
   return 0;
}