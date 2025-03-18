#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int ewCount = 0, nsCount = 0;
    for(int i = 0; i<s.size(); i++){
        if(s[i]=='N' || s[i]=='S'){
            if(s[i]=='N'){
                nsCount++;
            }
            else{
                nsCount--;
            }
        }
        else{
            if(s[i]=='E'){
                ewCount++;
            }
            else{
                ewCount--;
            }
        }
    }
    if(ewCount>=0){
        for(int i = 1; i<=ewCount; i++){
            cout << 'E';
        }
    }
    if(nsCount>=0){
        for(int i = 1; i<=nsCount; i++){
            cout << 'N';
        }
    }
    else{
        nsCount *= -1;
        for(int i = 1; i<=nsCount; i++){
            cout << 'S';
        }
    }
    if(ewCount<0){
        ewCount *= -1;
        for(int i = 1; i<=ewCount; i++){
            cout << 'W';
        }
    }

    return 0;
}