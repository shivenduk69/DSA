//in this program we are going to write code for valid parenthesis

#include<iostream>
#include<stack>
using namespace std;

bool balancedParenthesis(string str){
    stack<char> s;
    for(char ch: str){
        switch (ch){
            case '(':
            case '{': 
            case '[': s.push(ch); break;
            case ')': if(!s.empty() and s.top()=='(') s.pop();else return false; break;
            case '}': if(!s.empty() and s.top()=='{') s.pop(); else return false; break;
            case ']': if(!s.empty() and s.top()=='[') s.pop(); else return false; break; 
        }
    }
    return s.empty();
}

int main(){
    string str = "([[{}])";
    balancedParenthesis(str) ? cout << "Balanced!!" << endl : cout << "Not Balanced" << endl;
    return 0;
}