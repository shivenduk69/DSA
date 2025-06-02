#include<bits/stdc++.h>
using namespace std;

class diamond{
    protected:
    string x, y;
};

class A : public diamond{
    public:
    A(string x, string y){
        this->x = x;
        this->y = y;
    }
};

class B : public diamond{
    public:
    B(string x, string y){
       this ->x = x;
       this->y = y;
    }
};

class C : public A , public B{
    public:
    C(string x, string y) : A(x, y), B(x, y){
        cout << x << " " << y << endl;
    }
    ~C(){
        cout << "Memory deallocated" << endl;
    }
};

int main(){
    C c("Hello", "World");
    return 0;
}