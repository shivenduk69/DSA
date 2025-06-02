//A friend function is a non-member function that can access private/protected members of other class

#include<iostream>
using namespace std;
class Box {
    int length;
public:
    Box(int l) : length(l) {}
    friend void printLength(Box);  // friend function
};

void printLength(Box b) {
    cout << "Length: " << b.length << endl;  // ✅ Access private member
}

int main(){
    
    Box a(10);
    printLength(a);
    return 0;
}