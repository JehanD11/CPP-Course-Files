#include <iostream>
#include <string>

using namespace std;

//Struct
struct employee{
    int eid;
    string name;
    int salary;
};

//With the help of typedef i can name my struct and dont need to type more while calling it. Simply can call it by typing with what i ended the typedef struct with
typedef struct departments{
    int dep_id;
    string dep_name;
} dep;

/*Unions :- This the kind of structure which allows us memory management. This will allot memory to only that variable datatype
that is used. We have 3 datatypes in this union. If we use car then only car is alloted memory. Others cant be used. 
If you use any other variable datatype then it replaces the previous one.
*/
union random{
    char car;
    int number;
    float dimension;
};


int main(){

    union random r1;
    r1.car = 'a';
    cout << "The car i have is: " << r1.car << endl;

    r1.number = 10;
    cout << "The car i have is: " << r1.car << endl; //This will give us a garbage value.
    cout << "The number i have is: " << r1.number << endl; //This will return the proper value

    struct employee jehan;
    jehan.eid = 001;
    jehan.name = "Jehan";
    jehan.salary = 100000;

    cout << "Name: " << jehan.name << endl;
    cout << "Salary: " << jehan.salary << endl;
    cout << "EID: " << jehan.eid << endl;

    dep dep1;
    dep1.dep_id = 1;
    dep1.dep_name = "Tech";

    cout << "The name of the department is: " << dep1.dep_name << endl;
    cout << "The ID of the department is: " << dep1.dep_id << endl;
    return 0;
}