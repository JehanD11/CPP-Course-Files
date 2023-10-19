#include <iostream>
#include <string>

using namespace std;

class binary{
    string s;
    public:
        void get_bin(void);
        void check_bin(void);
        void ones_compliment(void);
};

void binary :: get_bin(void){
    cout << "Enter a binary number: " << endl;
    cin >> s;
}

void binary :: check_bin(void){
    for(int i = 0; i < s.length(); i++){
        if(s.at(i)!= '0' && s.at(i)!= '1'){
            cout << "You entered a incorrect binary number";
            exit(0);
        }
} 
}

void binary :: ones_compliment(void){
    check_bin(); //Nested member function
    for(int i = 0; i < s.length(); i++){
        if(s.at(i) == '1'){
            s.at(i) = '0';
        } else if(s.at(i) == '0'){
            s.at(i) = '1';
        }
    }
    cout << "The ones compliment of the binary number is:\n" << s;
}

int main(){
    binary b;
    b.get_bin();
    // b.check_bin();
    b.ones_compliment();
    return 0;
}