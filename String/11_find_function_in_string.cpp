#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        return haystack.find(needle);
    }
};
int main(){
    string haystack;
    cin >> haystack;
    string needle;
    cin >> needle;
    Solution a;
    cout << a.strStr(haystack, needle) << endl;
    return 0;
}
