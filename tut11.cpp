#include <iostream>

using namespace std;

int main(){

    for(int i = 0; i < 8; i++) {
        if(i == 2) {
            break;

        } else {
            cout << i << " ";
        }
    }
    
    cout << endl;

    for(int j = 0; j < 8; j++) {
        if(j == 2) {
            continue;
        } else {
            cout << j << " ";
        }
    }
    return 0;
}