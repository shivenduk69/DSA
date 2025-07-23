// in this program we are going to do another spoj problem called expedition problem

#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
int main(){
    int t, n, a, b, l, p; cin >> t;
    vector<pair<int, int>> v;
    while(t--){
        v.push_back({0, 0});
        cin >> n;
        for(int i = 0; i<n; i++){
            cin >> a >> b;
            v.push_back({a, b});
        }
        cin >> l >> p;
        for(int i = 1; i<=n; i++){
            v[i].first = l-v[i].first;
        }
        sort(v.begin(), v.end());
        int ans = 0;
        bool flag = false;
        priority_queue<int> pq;
        for(int i = 1; i<=n and l>=0; i++){
            pq.push(v[i].second);
            int distanceCovered = v[i].first-v[i-1].first;
            l = l-distanceCovered;
            p = p-distanceCovered;
            if(p==0 and l>0 and !pq.empty()){
                p += pq.top();
                pq.pop();
                ans++;
            }
            if(pq.empty() and l>0 and p==0){
                cout << -1 << endl;
                flag = true;
                break;
            }
        }
        while(!pq.empty() and l>0){
            l -= pq.top();
            pq.pop();
            ans++;
        }
        if(l>0){
            cout << -1 << endl;
            flag = true;
        }
        if(flag) continue;
        cout << ans << endl;
        v.clear();
    }
    return 0;
}