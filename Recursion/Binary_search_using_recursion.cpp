#include<iostream>
#include<vector>
using namespace std;
int binaryIndex(vector<int> &vec, int target, int s, int e, int mid){
    mid = s+(e-s)/2;
    if(s>e) return -1;
    if(vec[mid]==target) return mid;
    else if(vec[mid]>target){
        return binaryIndex(vec, target, s, mid-1, mid);
    }
    return binaryIndex(vec, target, mid+1, e, mid);

}
int binarySearch(vector<int> &vec, int target){
    int mid = 0+(vec.size()-0)/2;
    return binaryIndex(vec, target, 0, vec.size()-1, mid);
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
    cout << binarySearch(vec, target) << endl;
    return 0;
}