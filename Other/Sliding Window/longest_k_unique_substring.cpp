//Sliding window
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int fun(vector<int> &ans){
    int count = 0;
    for(int i = 0; i<ans.size(); i++){
        if(ans[i]!=0){
            count++;
        }
    }
    return count;
}
int longestSubstring(string s, int k){
    int n = s.size();
    int i = 0; 
    int j = 0;
    int maxi = -1;
    vector<int> ans(26, 0);
    while(j<n){
        ans[s[j]-'a']++;
        while(fun(ans) > k){
            ans[s[i]-'a']--;
            i++;
        }
        if(fun(ans) == k){
            int len = j-i+1;
            maxi = max(maxi, len);
        }
        j++;
    }
    return maxi;
}
int main(){
    string s;
    getline(cin, s);
    int k;
    cin >> k;
    cout << longestSubstring(s, k) << endl;
    return 0;
}