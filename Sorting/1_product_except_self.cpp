#include<bits/stdc++.h>
using namespace std;
void productExceptSelf(int n, vector<int> &vec){
    vector<int> result(n);
    int lpro = 1;
    for(int i = 0; i<n; i++){
        result[i] = lpro;
        lpro *= vec[i];
    }
    int rpro = 1;
    for(int i = n-1; i>=0; i--){
        result[i] *= rpro;
        rpro *= vec[i];
    }
    for(int i :result){
        cout << i << " ";
    }
    cout << endl;
    return;
}
int main(){
    int n;
    cin >> n;

    vector<int> vec(n);
    for(int i = 0; i<n; i++){
        cin >> vec[i];
    }
    productExceptSelf(n, vec);
    return 0;
}