#include<iostream>
using namespace std;
class Test {
    
public:
    int a=10;
    void show() const {  // constant member function
        cout << "This is a const function\n";
        //a = 11; ❌ Not allowed in constant member function
        cout << a << endl;
    }
};

int main(){
    Test a;
    a.show();
    return 0;
}