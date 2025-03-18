#include<bits/stdc++.h>
using namespace std;
int main(){
    string name = "Imran Nazir123";
    transform(name.begin(), name.end(), name.begin(), ::toupper);
    cout << name << endl;
    return 0;
}