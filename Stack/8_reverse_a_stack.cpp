//in this program we are going to reverse the stack

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
    int temp = s.top();
    s.pop();
    insertAtBottom(s, data);
    s.push(temp);
}
void reverseStack(stack<int> &s){
    if(s.empty()) return;

    int temp = s.top();
    s.pop();
    reverseStack(s);
    insertAtBottom(s, temp);
}
int main(){
    stack <int> s;
    
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    printStack(s);

    reverseStack(s);

    printStack(s);
    return 0;
}