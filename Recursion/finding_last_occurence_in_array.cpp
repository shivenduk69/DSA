#include<iostream>
#include<vector>
using namespace std;
int lastIndexOccurence(vector<int> &vec, int target, int j){
    if(vec[j]==target) return j;
    if(j==0) return -1;
    return lastIndexOccurence(vec, target, j-1);
    
}
int lastOccurence(vector<int> &vec, int target){
    return lastIndexOccurence(vec, target, vec.size()-1);
}
int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i<n; i++){
        cin >> vec[i];
    }
    int target;
    cin >> target;
    cout << lastOccurence(vec, target) << endl;
    return 0;
}