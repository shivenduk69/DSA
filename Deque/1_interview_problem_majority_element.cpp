//in this program we will find maximum for each and every part of continuous subarray

#include<iostream>
#include<deque>
#include<vector>
using namespace std;
void maximumSubarray(vector<int> &vec){
    deque<int> d;
    
    for(int i = 0; i<vec.size(); i++){

    }
}
int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i<n; i++){
        cin >> vec[i];
    }
    maximumSubarray(vec);
    for(int i: vec){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}