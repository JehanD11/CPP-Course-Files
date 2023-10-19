#include <iostream>

using namespace std;

//Array of objects using pointers
class shop {
    int id;
    float price;

    public:
        void setData(int, float);
        void getData();
};

void shop :: setData(int a, float b){
    id = a;
    price = b;
}

void shop :: getData(){
    cout << "Item id: " << id << endl;
    cout << "Price: " << price << endl;
}

int main(){
    int size;
    cout << "Enter the number of objects to be registered : ";
    cin >> size;

    shop *ptr1 = new shop [size];
    shop *ptr2 = ptr1;

    int i, p;
    float q;
    for (i = 0; i < size; i++) {
        cout << "\nEnter the ID of item " << i + 1 << ": ";
        cin >> p;
        cout << "\nEnter the Price of item " << i + 1 << ": ";
        cin >> q;
        
        ptr1->setData(p, q);
        ptr1++;
    }

    //For printing
    for (i = 0; i < size; i++){
        ptr2->getData();
        ptr2++;
    }

    return 0;
}