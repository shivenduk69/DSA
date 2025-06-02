// This is the argument provided for if use doesnot give any argument then it will take automatically

#include<iostream>
using namespace std;
class Greet{
public:
    void sayHello(string name = "User"){
        cout << "Hello " << name << "!!" << endl; 
    }
};
int main(){
    Greet s;
    s.sayHello();
    s.sayHello("Shivendu");
    return 0;
}