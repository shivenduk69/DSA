//in this program we are going to solve rod cutting problem based on unbounded knapsack

#include<iostream>
#include<vector>
using namespace std;
int max_price(vector<int> &price, int size, vector<int> &dp, int n){
    if(size == 0) return 0;
    if(dp[size] != -1) return dp[size];

    int ans = 0;
    for(int k = 1; k<=size; ++k){
        if(size-k>=0)
            ans = max(ans, max_price(price, size-k, dp, n)+price[k]);
    }
    return dp[size]=ans;
}
int main(){
    int n;
    cin >> n;
    vector<int> price(n+1);
    price[0] = 0;
    vector<int> dp(n+1, -1);
    for(int i = 1; i<=n; i++){
        cin >> price[i];
    }
    cout << max_price(price, n, dp, n) << endl;
    return 0;
}