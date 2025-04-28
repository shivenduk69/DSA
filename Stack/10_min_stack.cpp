//in this program we will implement a stack having push, pop, top and retrieving minimum feature in constant time

#include<iostream>
#include<stack>
using namespace std;
class custom_stack{
    stack<int> main_stack;
    stack<int> min_stack;
    public:

    void push(int data){
        main_stack.push(data);
        if(min_stack.empty() || min_stack.top()>=data){
            min_stack.push(data);
        }
    }
    void pop(){
        int temp = main_stack.top();
        main_stack.pop();
        if(temp==min_stack.top()){
            min_stack.pop();
        }
    }
    int size(){
        return main_stack.size();
    }
    int top(){
        return main_stack.top();
    }
    bool empty(){
        return main_stack.empty();
    }
    int getMin(){
        return min_stack.top();
    }
};

int main(){
    custom_stack s;
    s.push(10);
    s.push(-2);
    s.push(30);

    cout << "top " << s.top() << endl;
    cout << "min is " << s.getMin() << endl;
    return 0;
}