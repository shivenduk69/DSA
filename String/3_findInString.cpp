#include<iostream>
using namespace std;
int main(){
    string s = "I am learning DSA";
    string word = "learning";
    int index = s.find(word);
    cout << index << endl;
    return 0;
}