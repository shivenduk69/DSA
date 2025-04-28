//in this program we are going to implement a queue by using deque

#include<iostream>
#include<deque>
using namespace std;
template<typename T>
class queue{
    deque<T> d;
    public:
        void push(T val){
            d.push_back(val);
        }
        void pop(){
            d.pop_front();
        }
        T front(){
            return d.front();
        }
        int size(){
            return d.size();
        }
        bool empty(){
            return d.empty();
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