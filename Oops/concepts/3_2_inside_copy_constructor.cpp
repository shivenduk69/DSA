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
    // the code which we written below for copy constructor is written by default in copy constructor, here we wrote to show how copy constructor copies things internally
    Car(Car &x){
        //We passed the argument inside constructor by refrence bcoz if i will pass by value then x will be a copy of d basically Car x = d but to copy d to x it is only possible by the help of copy constructor so this is not working and when we do pass by refrence it works fine.
        cout << "Copy constructor" << endl;
        price = x.price;
        build_no = x.build_no;
        name = x.name;
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
    //even after copying we can also update parameters
    e.price = 14;
    e.print(); 

    //Another way of calling copy constructor
    Car f  = d;// this is also a copy constructor
    cout << "car f " << endl;
    f.print();


    return 0;
}