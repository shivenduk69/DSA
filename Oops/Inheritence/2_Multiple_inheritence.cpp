//A class that can be derived from more than one base class, using a comma separated list
#include<iostream>
using namespace std;
class grandParent{
    public:
    
    void myclass(){
        cout << "This is my class" << endl;
    }
};

class parent{
    public:

    void myotherClass(){
        cout << "Yrr tum to rahne hi do" << endl;
    }
};

class child : public grandParent, public parent{
};
int main(){
    child shiv;
    shiv.myclass();
    shiv.myotherClass();
    return 0;
}