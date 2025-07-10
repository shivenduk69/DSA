// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<sstream>
using namespace std;

int main() {
    string s = "/home/class/roll";
    vector<string> vec;
    stringstream ss(s);
    string token;
    while(getline(ss, token, '/')){
        if(!token.empty()){
            vec.push_back(token);
        }
    }
    for(string i: vec){
        cout << i << endl;
    }
    return 0;
}