#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec;
    vec.push_back(5);//Adds element at the last
    cout << vec.size() << "\n";
    for(int i: vec){
        cout << i << " ";
    }
    return 0;
}