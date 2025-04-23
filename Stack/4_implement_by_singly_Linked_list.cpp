//in this program we are going to implement a dyanamic stack by using singly linkedlist or forward_list

#include<iostream>
#include<forward_list>
using namespace std;

template<typename T>
class stack{
    forward_list<T> fl;
    public:

    void push(T val){
        fl.push_front(val);
    }
    void pop(){
        fl.pop_front();
    }
    T top(){
        return fl.front();
    }
    int size(){
        return distance(fl.begin(), fl.end());
    }
    bool empty(){
        return fl.empty();
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