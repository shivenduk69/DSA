#include <iostream>
using namespace std;

void greet(string name = "User") {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    greet();             // Uses default argument
    greet("Alice");      // Overrides default
    return 0;
}
