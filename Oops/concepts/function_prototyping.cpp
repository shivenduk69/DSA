//A function prototype defines a function before it is defined

#include<iostream>
using namespace std;
class calculator{
    public:
        int add(int, int);
};

int calculator::add(int a, int b){
    return a+b;
}
int main(){
    calculator c;
    cout << "Sum of 4 and 5 is " << c.add(4, 5) << endl; 
    return 0;
}