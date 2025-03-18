#include<iostream>
#include<vector>
using namespace std;

bool should_i_swap(pair<int, int> a, pair<int, int> b){
    if(a<b) return true;
    return false;
}
int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> vec(n);
    for(int i = 0; i<n; i++){
        cin >> vec[i].first >> vec[i].second;
    }
    
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(should_i_swap(vec[i], vec[j])){
                swap(vec[i], vec[j]);
            }
        }
    }
    for(int i = 0; i<n; i++){
        cout << vec[i].first << " " << vec[i].second << endl;
    }
    cout << endl;
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;
bool should_i_swap(int a, int b){
    if(a<b) return true;
    return false;
}
bool should_i_swap(pair<int, int> a, pair<int, int> b){
    if(a.first != b.first){
        if(a.first>b.first){
            return true;
        }
        else{
            return false;
        }
    }else{
        if(a.second<b.second) return true;
        else return false;
    }

}
int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> vec(n);
    for(int i = 0; i<n; i++){
        cin >> vec[i].first >> vec[i].second;
    }
    
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(should_i_swap(vec[i], vec[j])){
                swap(vec[i], vec[j]);
            }
        }
    }
    for(int i = 0; i<n; i++){
        cout << vec[i].first << " " << vec[i].second << endl;
    }
    cout << endl;
    return 0;
}