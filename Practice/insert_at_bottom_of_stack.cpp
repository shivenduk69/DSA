#include<iostream>
#include<stack>
using namespace std;
void printStack(stack<int> s){
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
void insertAtBottom(stack<int> &s, int data){
    if(s.empty()){
        s.push(data);
        return;
    }
    int x = s.top();
    s.pop();
    insertAtBottom(s, data);
    s.push(x);
}
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    printStack(s);

    insertAtBottom(s, 0);

    printStack(s);
    return 0;
}