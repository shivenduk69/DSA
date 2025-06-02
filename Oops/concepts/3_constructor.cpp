#include<iostream>
using namespace std;
class Car{
public:
    int price;
    int build_no;
    string name;

    //Constructor
    Car(){//default constructor
        cout << "Inside car constructor" << endl;
    }
    Car (float p, int b, string n){//Parameterised constructor
        price = p;
        int build_no = b;
        name = n;
    }
    void print(){
        cout << "price is " << price << endl;
        cout << "Build no is " << build_no << endl;
        cout << "name of the car is " << name << endl;
    }
};
int main(){
    Car c;
    Car d(345, 34, "BMW");//Parameterised constructor
    d.print();
    return 0;
}