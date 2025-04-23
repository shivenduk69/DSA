//in this program we are going to implement a dyanamic stack by using doubly linked list

#include<iostream>
#include<list>
using namespace std;
template<typename T>

class stack{
    list <T> ls;
    public:

    void push(T val){
        ls.push_back(val);
    }
    void pop(){
        ls.pop_back();
    }
    T top(){
        return ls.back();
    }
    int size(){
        return ls.size();
    }
    bool empty(){
        return ls.empty();
    }
    
};


int main(){
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << "Size is " << s.size() << endl;
    cout << "top " << s.top() << endl;
    cout << "isEmpty " << s.empty() << endl;

    s.pop();

    cout << s.size() << endl;
    cout << "top " << s.top() << endl;

    s.pop();

    cout << s.size() << endl;
    cout << "top " << s.top() << endl;
    
    s.pop();

    cout << s.size() << endl;
    cout << "top " << s.top() << endl;

    s.pop();

    cout << s.size() << endl;
    cout << "top " << s.top() << endl;

    s.pop();

    cout << s.size() << endl;
    cout << "isEmpty " << s.empty() << endl;
    
    return 0;
}