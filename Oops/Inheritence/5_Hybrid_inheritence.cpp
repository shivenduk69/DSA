//A combination of more than one type of inheritence

#include<iostream>
using namespace std;
class Animal{
public:
    void display1(){
        cout << "Hii" << endl;
    }
};

class dog: public Animal{
public:
    void display2(){

    }
};

class dogChild: public dog, public Animal{
public:
    void display(){

    }
};
int main(){
    return 0;
}