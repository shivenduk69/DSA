#include<iostream>
using namespace std;
class complex{
    float real, imag;
    public:
    complex(float r = 0, float i = 0){
        real = r;
        imag = i;
    }
    complex operator + (const complex& obj){
        return complex(real+obj.real, imag+obj.imag);
    }
    void display(){
        cout << real << "+" << imag << "i" << endl;
    }
};

int main(){
    complex c1(2, 3), c2(3,4);
    complex c3 = c1+c2;
    c3.display();
    return 0;
}