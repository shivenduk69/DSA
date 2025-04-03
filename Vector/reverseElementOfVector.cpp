#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int>&vec,int size){//Passed by refrence
    for(int i=0;i<size/2;i++){
        int temp=vec[i];
        vec[i]=vec[size-1-i];
        vec[size-1-i]=temp;
    }
    
}
int main(){
    vector <int> vec={1,2,3,4,5};
    reverse(vec,5);
    for(int i: vec){
        cout << i << " ";
    }
    return 0;
}