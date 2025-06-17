//in this problem we are going to solve knapsack problem by dp

#include<iostream>
#include<vector>
using namespace std;
long long knapsack(vector<int> &weight, vector<int> &value, int w, int i, long long val=0){
    long long ans = 0;
    int n = weight.size();
    if(w>0){
        ans = max(ans, val);
    }
    if(w==0) return val;
    if(i==n) return 0;
    
    
    ans = max(ans, max(knapsack(weight, value, w-weight[i], i+1, val+value[i]),
    knapsack(weight, value, w, i+1, val)));
    return ans;
}
int main(){
    int n, w;
    cin >> n >> w;
    vector<int> weight(n);
    vector<int> value(n);
    for(int i = 0; i<n; i++){
        cin >> weight[i] >> value[i];
    }
    cout << knapsack(weight, value, w, 0) << endl;
    return 0;
}