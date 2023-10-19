#include <iostream>

using namespace std;

class employee{
    int id;
    static int count;

    /*--> What static does is that it makes count common for all the objects created for the particular class.
    --> If we would not have used static then the count will remain 1 for each object because the count variable 
        will be reset and be different for each onject*/

    public:
        void setData(void){
            cout << "Enter the id: " << endl;
            cin >> id;
            count++;
        }

        void displayData(void){
            cout << "The id of the employee is: " << id << " and the employee number is: " << count << endl;
        }

        static void getCount(void){
            cout << "The value of count is: " << count << endl;
        }

};

int employee :: count;

int main(){

    employee x, y, z;

    x.setData();
    x.displayData();
    employee :: getCount();

    y.setData();
    y.displayData();
    employee :: getCount();

    z.setData();
    z.displayData();
    employee :: getCount();
    return 0;
}