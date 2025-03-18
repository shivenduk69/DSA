#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[30];
    cin >> str;
    int size = 0;
    int i = 0;
    while(str[i++]!='\0'){
        size++;
    }
    cout << size << endl;
    int len = strlen(str);
    for(int i = 0; i<len/2; i++){
        swap(str[i], str[len-1-i]);
    }
    cout << len << endl;
    cout << str << endl;
    return 0;
}