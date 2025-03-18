#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue <string> q;
    q.push("Shivendu");
    q.push("Kumar");
    q.push("Sharma");

    cout << "First element of queue is : " << q.front() << endl;

    q.pop();//Jo sabse pahle gaya wahi sbse pahle bahar jayega
    cout << "First element after pop : " << q.front() << endl;

    cout << "Size of queue : " << q.size() << endl;

    cout << "Last element of queue : " << q.back() << endl;

    cout << "Is empty " << q.empty() << endl;
    
    return 0;
}