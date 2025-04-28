//in this program we will implement a queue by using list

#include<iostream>
#include<list>
using namespace std;
template <typename T>
class queue{
    list<T> l;
    public:

    void push(T val){
        l.push_back(val);
    }
    void pop(){
        l.pop_front();
    }
    T front(){
        return l.front();
    }
    int size(){
        return l.size();
    }
    bool empty(){
        return l.empty();
    }

};
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "front is " << q.front() << endl;
    cout << "Size is " << q.size() << endl;
    cout << "is empty " << q.empty() << endl;

    q.pop();

    cout << "front is " << q.front() << endl;
    cout << "Size is " << q.size() << endl;
    cout << "is empty " << q.empty() << endl;
    q.pop();

    cout << "front is " << q.front() << endl;
    cout << "Size is " << q.size() << endl;
    cout << "is empty " << q.empty() << endl;
    q.pop();

    cout << "Size is " << q.size() << endl;
    cout << "is empty " << q.empty() << endl;
    return 0;
}