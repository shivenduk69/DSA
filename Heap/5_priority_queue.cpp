// in this program we will see priority queue

#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> m;//maxHeap is default

    m.push(1);
    m.push(2);
    m.push(3);
    m.push(4);
    m.push(5);
    m.push(6);
    m.push(7);
    m.push(8);
    m.push(9);

    cout << m.size() << endl;

    while(!m.empty()){
        cout << m.top() << " ";
        m.pop();
    }
    cout << endl;
    cout << m.size();
    return 0;
}