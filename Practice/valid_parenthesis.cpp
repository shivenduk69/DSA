#include<iostream>
#include<stack>
using namespace std;
bool validParenthesis(string s){
    stack<char> sta;
    for(int i = 0; i<s.size(); i++){
        char ch = s[i];
        switch (ch){
            case '(': 
            case '{':
            case '[': sta.push(ch); break;
            case ')': if(!sta.empty() and sta.top() == '(') sta.pop(); else return false; break;
            case ']': if(!sta.empty() and sta.top() =='[') sta.pop(); else return false; break;
            case '}': if(!sta.empty() and sta.top() == '{') sta.pop();else return false; break;
        }
    }
    if(sta.empty()) return true;
    return false;
}
int main(){
    string s = "([{}])";
    validParenthesis(s) ? cout << "Balanced!!" << endl : cout << "Not Balanced!!" << endl;  
    return 0;
}