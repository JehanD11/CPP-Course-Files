#include <iostream>

using namespace std;

int count = 0;

class number {
    public:
        number(){
            count++;
            cout << "The constructor is called for object " << count << endl;
        }

        ~number(){
            cout << "The destructor is called for object " << count << endl;
            count--;
        }
};

int main(){
    cout << "We are inside the main function now." << endl;
    cout << "We have created our first object" << endl;
    number n1;
    {
        cout << "Now we have entered a block" << endl;
        cout << "Creating 2 more objects" << endl;
        number n2, n3;
        cout << "Exiting this block" << endl;
    }
    //Blocks are created by {} brackets. The code inside this block is destroyed after the code block is exited
    
    /*The destructor for object 1 is not called as it was not inside the block. 
    But it has been destroyed after the complete compilation of the code*/
    cout << "Now we are back to main!" << endl;

    return 0;
}