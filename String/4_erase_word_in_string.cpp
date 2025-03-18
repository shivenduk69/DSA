#include<iostream>
#include<string>
using namespace std;
int main(){
    char a[100] = "I am learning physics";
    //copying character array to string
    string s(a);
    cout << s << endl;
    string word = "learning";
    int index = s.find("learning");
    cout << index << endl;
    s.erase(index, word.length()+1);
    cout << s << endl;
    return 0;
}