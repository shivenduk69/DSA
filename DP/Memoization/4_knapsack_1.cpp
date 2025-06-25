//in this problem we are going to solve knapsack problem by dp     

#include<iostream>
#include<vector>
using namespace std;
long long knapsack(vector<int> &weight, vector<int> &value, int amount, int idx, vector<vector<long long>> &dp){     
    int n = weight.size();
    if(amount == 0) return 0;
    if(amount<0) return -1e9;//invalid path
    if(idx==n) return 0;//base case
    if(dp[amount][idx]!=-1) return dp[amount][idx];
    
    return dp[amount][idx]=max(value[idx]+knapsack(weight, value, amount-weight[idx], idx+1, dp), knapsack(weight, value, amount, idx+1, dp));     
}     
int main(){
    int n, w;
    cin >> n >> w;     
    vector<int> weight(n);     
    vector<int> value(n);     
    vector<vector<long long>> dp(w+1, vector<long long> (n, -1));
    for(int i = 0; i<n; i++){     
        cin >> weight[i] >> value[i];
    }
    cout << knapsack(weight, value, w, 0, dp) << endl;     
    return 0;
}