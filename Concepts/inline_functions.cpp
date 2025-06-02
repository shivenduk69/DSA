#include <iostream>
using namespace std;

inline int multiply(int a, int b) {
    return a * b;
}

int main() {
    cout << "3 * 4 = " << multiply(3, 4) << endl;
    return 0;
}
