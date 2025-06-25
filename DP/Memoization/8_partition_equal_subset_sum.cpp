//in this program we are going to solve a leetcode problem partition equal subset sum by using dp

///in this program we are going to find subset sum using dp

#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
bool partition(vector<int> &nums,int sum, int idx, vector<vector<int>> &dp){
    if(sum == 0) return true;

    if(idx<0) return false;
    if(dp[sum][idx]!=-1) return dp[sum][idx];
    bool isSolved = partition(nums, sum, idx-1, dp);

    if(sum-nums[idx]>=0)
    //here we will do isSolved or= so that is isSolved is true then it will remain true
        isSolved |= partition(nums, sum-nums[idx], idx-1, dp);
    return dp[sum][idx]=isSolved;
}
bool canPartition(vector<int>& nums) {
    int  n = nums.size();
    int sum = accumulate(nums.begin(), nums.end(), 0);
    if(sum&1) return false;
    vector<vector<int>> dp(sum/2 +1, vector<int> (n, -1));
    return partition(nums, sum/2, n-1, dp);
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    cout << canPartition(arr) << endl;
    return 0;
}