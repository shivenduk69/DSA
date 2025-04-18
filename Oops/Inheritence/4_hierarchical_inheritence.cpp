//Multiple Derived class from a single class

#include<iostream>
using namespace std;
class Animal{
public:
    void display1(){
        cout << "Hello Janwaron" << endl;
    }
};

class dog : public Animal{
public:
    void display2(){
        cout << "Mishra ji looks like this class name" << endl;
    }
};

class cat : public Animal{
public:
    void display3(){
        cout << "I 'm a cat" << endl;
    }
};
int main(){
    cat a;
    a.display3();
    return 0;
}