#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec(5, 1);// 5 size ka vector with each element as 1
    for(int i : vec){
        cout << i << "  ";
    }

    return 0;
}