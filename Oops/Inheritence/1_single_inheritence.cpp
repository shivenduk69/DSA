//in single inheritence we make a child class which also contains properties of parent class which are public
// see the way to write it like one parent and one child

#include<iostream>
using namespace std;
class customer{
public:
    int a;
    int b;
};

class car : public customer{//car is child and also having the parent customer
public:
    int c;
    int d;
};
int main(){
    car scorpio;
    scorpio.a = 5;
    scorpio.b = 6;
    scorpio.c = 7;
    scorpio.d = 8;
    cout << scorpio.a << endl;
    return 0;
}