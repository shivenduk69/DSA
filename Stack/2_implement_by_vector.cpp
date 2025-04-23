//in this we are going to implement a dyanamic stack by using vector and can be used for all data types

#include<iostream>
#include<vector>
using namespace std;

template<typename T>

class stack{
    vector<T> v;
    public:

    void push(T val){
        v.push_back(val);
    }
    void pop(){
        if(empty()) return;
        v.pop_back();
    }
    T top(){
        return v.back();
    }
    int size(){
        return v.size();
    }
    bool empty(){
        return v.empty();
    }
};

int main(){
    stack <char> s;

    s.push('a');
    s.push('b');
    s.push('c');
    s.push('d');
    s.push('e');

    cout << "Size " << s.size() << endl;
    cout << "top " << s.top() << endl;
    return 0;
}