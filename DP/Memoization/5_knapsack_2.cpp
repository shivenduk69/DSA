// in this program we are going to solve the problem knapsack 2 where we are going to take a item any number of time


//T.C -> O(N*W) and it may lead to out of bound if constraint for w is high
// #include <iostream>
// #include <vector>
// using namespace std;
// long long knapsack(vector<int> &weight, vector<int> &value, int amount, vector<long long> &dp)
// {
//     int n = weight.size();
//     if (amount == 0)
//         return 0;
//     if (dp[amount] != -1)
//         return dp[amount];
//     long long ans = 0;
//     for (int k = 0; k < n; k++)
//     {
//         if (amount - weight[k] >= 0)
//             ans = max(ans, value[k] + knapsack(weight, value, amount - weight[k], dp));
//     }
//     return dp[amount] = ans;
// }
// int main()
// {
//     int n, w;
//     cin >> n >> w;
//     vector<int> weight(n);
//     vector<int> value(n);
//     vector<long long> dp(w+1, -1);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> weight[i] >> value[i];
//     }

//     cout << knapsack(weight, value, w, dp) << endl;
//     return 0;
// }


//so we will use value as state

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int knapsack(vector<int> &weight, vector<int> &value, int value_left, int idx, vector<vector<int>>&dp){
    if(value_left == 0) return 0;
    if(idx < 0) return INT_MAX;
    if(dp[idx][value_left] != -1) return dp[idx][value_left];

    // not take
    int ans = knapsack(weight, value, value_left, idx-1, dp);

    // take (do not decrease idx for unbounded)
    if(value_left - value[idx] >= 0) {
        int take = knapsack(weight, value, value_left - value[idx], idx, dp);
        if(take != INT_MAX)
            ans = min(ans, weight[idx] + take);
    }

    return dp[idx][value_left] = ans;
}

int main(){
    int n, w;
    cin >> n >> w;
    vector<int> weight(n);
    vector<int> value(n);
    int max_value = 1e5; // according to constraint
    vector<vector<int>> dp(n, vector<int>(max_value+1, -1));

    for (int i = 0; i < n; i++) {
        cin >> weight[i] >> value[i];
    }
    for(int i = max_value; i >= 0; --i){
        if(knapsack(weight, value, i, n-1, dp) <= w){
            cout << i << endl;
            break;
        }
    }
    return 0;
}
