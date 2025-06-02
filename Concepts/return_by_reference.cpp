    #include <iostream>
    using namespace std;

    int& getRef(int &x) {
        return x;  // return reference to x
    }

    int main() {
        int a = 10;
        getRef(a) = 50;  // Modifies a directly
        cout << "a = " << a << endl;  // Output: a = 50
        return 0;
    }
