#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1 = "Hello";
    string s2 = "World!";
    if(s1 < s2){
        cout << s1 << " comes before " << s2 << " lexicographically or in dictionary" << endl;
    }
    else{
        cout << s2 << " comes before " << s2 << " lexicographically or in dictionary" << endl;
    }

    return 0;
}