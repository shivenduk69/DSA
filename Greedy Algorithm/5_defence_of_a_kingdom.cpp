// in this program we are going to solve another spoj problem called defkin or defense of a kingdom

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t, w, h, n, a, b; cin >> t;
    vector<int> x;
    vector<int> y;
    while(t--){
        cin >> w >> h >> n;
        x.push_back(0);
        y.push_back(0);
        for(int i = 0; i<n; i++){
            cin >> a >> b;
            x.push_back(a);
            y.push_back(b);
        }
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        for(int i = 0; i<=n; i++){
            if(i != n){
                x[i] = x[i+1]-x[i]-1;
            }else{
                x[i] = w+1-x[i]-1;
            }
        }
        for(int i = 0; i<=n; i++){
            if(i != n){
                y[i] = y[i+1]-y[i]-1;
            }else{
                y[i] = h+1-y[i]-1;
            }
        }
        int p = *max_element(x.begin(), x.end());
        int q = *max_element(y.begin(), y.end());
        cout << p*q << endl;
        x.clear(), y.clear();
    }
    return 0;
}
