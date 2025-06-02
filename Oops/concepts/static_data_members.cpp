#include <iostream>
using namespace std;

class Counter {
public:
    static int count;  // Declaration

    Counter() {
        count++;  // Increment static member
    }

    void show() {
        cout << "Count: " << count << endl;
    }
};

// Definition outside the class
int Counter::count = 0;

int main() {
    Counter a, b, c;
    a.show();  // Output: Count: 3
    b.show();  // Output: Count: 3
    c.show();  // Output: Count: 3
    return 0;
}
