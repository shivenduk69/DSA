///in this program we are going to find subset sum using dp

#include<iostream>
#include<vector>
using namespace std;
bool subset(vector<int> &arr, int sum, int idx, vector<vector<int>> &dp){
    if(sum == 0) return true;
    if(idx == arr.size()) return false;
    if(dp[sum][idx]!=-1) return dp[sum][idx];
    bool isSolved = false;
    isSolved = subset(arr, sum, idx+1, dp);

    if(sum-arr[idx]>=0)
        isSolved |= subset(arr, sum-arr[idx], idx+1, dp);

    return dp[sum][idx]=isSolved;
}
bool isSubsetSum(vector<int>& arr, int sum) {
    // code here
    int n = arr.size();
    vector<vector<int>> dp(sum+1, vector<int> (n, -1));
    return subset(arr, sum, 0, dp);
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int sum;
    cin >> sum;
    cout << isSubsetSum(arr, sum) << endl;
    return 0;
}