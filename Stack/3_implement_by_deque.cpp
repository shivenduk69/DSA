//in this program we will implement a dyanamic stack by using doubly ended queue

#include<iostream>
#include<deque>
using namespace std;

template<typename T>

class stack{
    deque <T> d;
    public:

    void push(T val){
        d.push_back(val);
    }
    void pop(){
        if(empty()) return;
        d.pop_back();
    }
    T top(){
        return d.back();
    }
    int size(){
        return d.size();
    }
    bool empty(){
        return d.empty();
    }
};

int main(){
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << "Size " << s.size() << endl;
    cout << "top " << s.top() << endl;
    return 0;
}