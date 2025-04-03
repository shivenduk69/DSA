#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <char> vec = {'a','b','c','d','e'};
    
    for(char value: vec){
        cout << value << " ";
    }
    return 0;
}