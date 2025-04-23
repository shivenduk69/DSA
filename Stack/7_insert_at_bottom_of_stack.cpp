//in this program we are going to insert at bottom of stack

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
    //base case
    if(s.empty()){
        s.push(data);
        return;
    }
    //recursive case
    int temp = s.top();
    s.pop();
    insertAtBottom(s, data);
    s.push(temp);
    return;
}
int main(){
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    printStack(s);

    int data = 0;
    insertAtBottom(s, data);
    printStack(s);
    return 0;
}