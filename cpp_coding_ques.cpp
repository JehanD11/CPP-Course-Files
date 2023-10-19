#include <iostream>

using namespace std;

class questions{
    public:
        int temp[], arr[];
        int x = sizeof(arr);
        void rotate(arr[], int d){
            //this program is for array reversal   
            for(int i; i < x; i++){
                temp[i] =  arr[i];
            }
            int k = 0;
            for (int j = x - d; j < x; j++){
                arr[j] = temp[k];
                k++;
            }
            cout << "The array is: " << arr[]; 
        }
        void print(){
            for(int i = 0; i < x; i++)
        }

};

int main(){
    int li[] = {1,2,3,4,5};
    questions q;
    q.rotate(li, 2);

    return 0;
}