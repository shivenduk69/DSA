//in this program we will se queue stl

#include<iostream>
#include<queue>
using namespace std;
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