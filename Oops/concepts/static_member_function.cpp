#include <iostream>
using namespace std;

class MyClass {
public:
    static int x;

    static void show() {
        cout << "x = " << x << endl;
    }
};

int MyClass::x = 100;

int main() {
    MyClass::show();  // Access without object
    return 0;
}
