//in this program we are going to find the length of longest increasing subsequece

#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
const int N = 25e2+10;
vector<int> vec(N);
int dp[N];
int longestSubsequence(int i){
    if(dp[i] != -1) return dp[i];
    int ans = 1;
    for(int j = 0; j<i; j++){
        if(vec[i]>vec[j]){
            ans = max(ans, longestSubsequence(j)+1);
        }
    }
    return dp[i] = ans;
}
int main(){
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> vec[i];
    }
    memset(dp, -1, sizeof(dp));
    int ans = 1;
    for(int i = 0; i<n; i++){
        ans = max(ans, longestSubsequence(i));
    }
    cout << ans << endl;
    return 0;
}