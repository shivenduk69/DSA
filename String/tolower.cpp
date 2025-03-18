#include<bits/stdc++.h>
using namespace std;
int main(){
    string name = "Aayush123";
    transform(name.begin(), name.end(), name.begin(), ::tolower);
    cout << name << endl;
    return 0;
}