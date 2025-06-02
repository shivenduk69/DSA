//constant objects can only call constant member functions

#include<iostream>
using namespace std;
class Test {
public:
    void show() const {
        cout << "Const function called\n";
    }
    void display(){
        cout << "Hello World!!" << endl;
    }
};

int main() {
    const Test t;  // constant object
    t.show();      // ✅ allowed
    // t.display(); ❌ Not allowed
}
