#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int, string> m;

    m[1] = "Shivendu";
    m[2] = "Kumar";
    m[13] = "Sharma";

    m.insert({5, "bheem"});
    cout << "Before Erase" << endl;
    for(auto i : m){
        cout << i.first << " " << i.second << endl;
    }

    cout << "Finding 13-> " << m.count(13) << endl;

    m.erase(13);
    cout << "After erase " << endl;
    for(auto i:m){
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}