//These are the functions where the compiler replaces the function call with function code itself, to avoid the overhead of function calls
#include<iostream>
using namespace std;
class Math{
public:
    inline int square(int x){
        return x*x;
    }
};
int main(){
    
    Math m;
    cout << "Square of 5 is " << m.square(5) << endl;

    return 0;
}