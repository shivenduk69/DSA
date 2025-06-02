//Friend class is a class that can access private/protected member of another class

#include<iostream>
using namespace std;
class A {
    int x = 5;
    friend class B;  // B is a friend
};

class B {
public:
    void display(A obj) {
        cout << obj.x << endl;  // ✅ Can access private member
    }
};
int main(){
    A b;
    B a;
    a.display(b);
    return 0;
}