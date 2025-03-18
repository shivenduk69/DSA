#include<iostream>
#include<algorithm>
using namespace std;
bool compare(string a, string b){
    return a>b;
}
int main(){
    int n;
    cin >> n;
    string s[100];
    cin.ignore();
    for(int i = 0; i<n; i++){
        getline(cin, s[i]);
    }
    sort(s, s+n, compare);
    for(int i = 0; i<n; i++){
        cout << s[i] << " ";
    }
    return 0;
}