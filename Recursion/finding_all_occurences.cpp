#include<iostream>
#include<vector>
using namespace std;
void allIndices(vector<int> &vec, int target, int i){
    int n = vec.size();
    if(i==n-1) return;
    if(vec[i]==target) {
        cout << i << endl;
    }
    allIndices(vec, target, i+1); 
}
void allOccurences(vector<int> &vec, int target){
    int i = 0;
    allIndices(vec, target, i);
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
    allOccurences(vec, target);
    return 0;
}