#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec = {4,1,2,1,2};
    int ans=0;
    for(int i: vec){
        ans= ans^i;//xor operator used
    }
    cout << "Unique no. is : " << ans;
    return 0;
}