#include<iostream>
#include<vector>
using namespace std;
int firstOccurence(vector<int> &vec, int target, int i){
    if(vec[i]==target) return i;
    if(i==vec.size()-1) return -1;
    return firstOccurence(vec, target, i+1);
}
int firstIndex(vector<int> &vec, int target){
    return firstOccurence(vec, target, 0);
}
int main(){
    int n;
    cin >> n;//6
    vector<int> vec(n);//{2, 3, 4, 2, 3, 6}
    for(int i = 0; i<n; i++){
        cin >> vec[i];
    }
    int target;//2
    cin >> target;
    cout << firstIndex(vec, target) << endl;
    return 0;
}