#include <iostream>
#include <cmath>

using namespace std;

class point {
    int x, y;
    friend void distance(point, point);
    public:
        point(int, int);

        void printPoint(){
            cout << "The point is (" << x << "," << y << ") "<< endl;  
        }
};

point :: point(int a, int b){
    x = a;
    y = b;
}

void distance(point o1, point o2){
    int distance = sqrt((o2.x - o1.x)*(o2.x - o1.x) + ((o2.y - o1.y)*(o2.y - o1.y)));
    cout << distance << endl;
}

int main(){
    point p1(2,3);
    p1.printPoint();

    point p2(5,7);
    p2.printPoint();

    //We have these 2 points and now we want to calculate the disstance between these points.
    distance(p1, p2);

    return 0;
}