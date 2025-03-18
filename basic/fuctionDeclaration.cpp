#include<iostream>
using namespace std;
//Function Declaration
void function(string name);
int main(){
    string name="Geeta University";
    function(name);
    return 0;
}
//Function Definition
void function(string name){
    cout << name;
}