//inbuilt comparator function ulta kam karta hai
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool comparatorFunction(pair<int, int> a, pair<int, int> b){
    if(a.first != b.first){
        if(a.first>b.first){
            return false;
        }
        else{
            return true;
        }
    }else{
        if(a.second<b.second) return true;
        else return true;
    }

}
int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> vec(n);
    for(int i = 0; i<n; i++){
        cin >> vec[i].first >> vec[i].second;
    }
    
    sort(vec.begin(), vec.end(), comparatorFunction);
    for(int i = 0; i<n; i++){
        cout << vec[i].first << " " << vec[i].second << endl;
    }
    cout << endl;
    return 0;
}