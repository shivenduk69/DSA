//in this proble we have to find the minimum minCost so that frog will go to last stone

#include <iostream>
#include<climits>
#include<cstring>
using namespace std;

int minCost(int arr[], int n, int *dp, int i){
    if(i >= n-1) return 0;
    
    if(dp[i] != -1) return dp[i];
    
    int cost = INT_MAX;
    if(i+1 < n){
        cost = min(cost, abs(arr[i]-arr[i+1])+minCost(arr, n, dp, i+1));    
    }
    if(i+2 <n){
        cost = min(cost, abs(arr[i]-arr[i+2])+minCost(arr, n, dp, i+2));
    }
    return dp[i] = cost;
}
int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int dp[n];
    memset(dp, -1, sizeof(dp));
    cout << minCost(arr, n,dp, 0) << endl;
    return 0;
}


