//Function overloading

#include <iostream>

using namespace std;

int sum(int a, int b){
    return a+b;
}

int sum(int a, int b, int c){
    return a+b+c;
}
//Volume of a cuboid
int volume(int l, int b, int h){
    return (l * b * h);
}
//Volume of a cylinder
int volume(double r, int h){
    return (3.14 * r * r * h);
}
//Volume of a cube
int volume(int l){
    return (l * l * l);
}
int main (){
    cout << "sum: " << sum(1,2) << endl;
    cout << "sum: " << sum(1,2,3) <<  endl;
    cout << "The Volume of the cylinder is: " << volume(3, 6) << endl;
    cout << "The volume of the cuboid is: " << volume(3, 6, 9) << endl;
    cout << "The volume of the cube is: " << volume(3) << endl;
    return 0;
}