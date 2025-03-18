#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s[100];
    cin.get();//cin.ignore();
    for(int i = 0 ; i<n; i++){
        getline(cin, s[i]);
    }
    //sort
    sort(s, s+n);//Dictionary wise
    for(int i = 0; i<n; i++){
        cout << s[i] << endl;
    }
    return 0;
}