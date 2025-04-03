#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec (5,0);//We have initiatialised vector of size 5 each with 0 at every index
    for(int i=0;i<5;i++){
        cout << vec[i] << " ";
    }
    return 0;
}