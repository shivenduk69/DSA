//A derived class is inherited by another class

#include<iostream>
using namespace std;
class automobile{
public:
    void display1(){
        cout << "Inside Automobile" << endl;
    }
};

class car : public automobile{
    public:
    void display2(){
        cout << "Inside car" << endl;
    }
};

class bmw : public car{
public:
    void display3(){
        cout << "Inside BMW" << endl;
    }
};
int main(){
    bmw a;
    a.display3();
    a.display2();
    a.display1();
    return 0;
}