// in this program we are going to check if a subarray of the given array sum to 0 or not

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main(){
    vector<int> arr = {1, 3, 4, 5, -1};
    
    unordered_set<int> s;
    int sum = 0;
    int a = 0;
    for(int i = 0; i<arr.size(); i++){
        sum += arr[i];
        auto it = s.find(sum);
        if( it != s.end()){
            a = 1;
            cout << "True sum is found" << endl;
            break;
        }else{
            s.insert(sum);
        }
    }
    if(a==0) cout << "Sum not found" << endl;
    return 0;
}