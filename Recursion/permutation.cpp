#include<iostream>
#include<vector>
using namespace std;
void permute(vector<int> &vec, vector<int> &store, vector<int> &freq, int i){
    if(vec.size()==store.size()){
        for(int k: store){
            cout << k << " ";
        }
        cout << endl;
        return;
    }
    if(freq[i]==1){
        store.push_back(vec[i]);
        permute(vec, store, freq, i+1);
        store.pop_back();
        permute(vec, store, freq, i+1);
        freq[i] = 0;
    }
}
int main(){
    int n; cin >> n;
    vector<int> vec(n);
    for(int i = 0; i<n; i++){
        cin >> vec[i];
    }
    vector<int> store;
    vector<int> freq(n, 1);
    permute(vec, store, freq, 0);
    return 0;
}