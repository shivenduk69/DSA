// in this program we are going to solve a spoj problem called busy man or activity problem by greedy approach

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(pair<int, int> a, pair<int, int> b){
    return a.second<b.second;
}
int main(){
    int t, n, s, e; cin >> t;
    vector<pair<int, int>> v;
    while(t--){
        cin >> n;
        for(int i = 0; i<n; i++){
            cin >> s >> e;
            v.push_back({s, e});
        }
        // Activity selection algorithm
        // sort the input
        sort(v.begin(), v.end(), compare);

        int res = 1;
        int first_second = v[0].second;
        for(int i = 1; i<n; i++){
            if(first_second<=v[i].first){
                first_second = v[i].second;
                res++;
            }
        }
        cout<< res << endl;
        v.clear();
    }
    return 0;
}