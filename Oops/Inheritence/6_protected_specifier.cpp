#include <iostream>
using namespace std;

class Base {
protected:
    int x = 10;  // Protected member
};

class Derived : public Base {
public:
    void show() {
        cout << "x = " << x << endl;  // ✅ Accessible here
    }
};

int main() {
    Derived d;
    d.show();         // ✅ Works
    // cout << d.x;   // ❌ Error: x is protected
    return 0;
}
