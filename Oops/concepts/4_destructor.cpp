#include<iostream>
using namespace std;
class car{
public:
    car(){//constructor
        cout << "Creating Constructor!!" <<endl;
    }

    ~car(){//destructor
        cout << "Destroying Constructor!!" << endl;
    }

};
int main(){
    car xuv;//Constructor is called automatically
    return 0;//Destructor is called when object goes out of scope;
}