#include<iostream>
using namespace std;
class Car{
public:
    int price;
    int build_no;
    string name;

    //Constructor
    Car(){
        cout << "Inside car constructor" << endl;
    }
    Car (float p, int b, string n){
        price = p;
        build_no = b;
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
    c.price = 13;
    c.build_no = 18;
    c.name = "Audi";
    cout << "Car c" << endl;
    c.print();

    Car d(345, 34, "BMW");//Parameterised constructor
    cout << "car d " << endl;
    d.print();

    //Copy constructor
    Car e(d);//it is read as "car e which is  a copy of car d
    cout << "car e" << endl;
    e.print(); 
    return 0;
}