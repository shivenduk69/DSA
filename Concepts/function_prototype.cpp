#include <iostream>
using namespace std;

int sum(int, int);  // Function prototype

int main() {
    cout << "Sum = " << sum(5, 7) << endl;
    return 0;
}

int sum(int a, int b) {
    return a + b;
}
