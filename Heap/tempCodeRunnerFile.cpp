// in this program we will see how can we implement min heap as priority queue in our code

#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int, vector<int>, greater<int>> m;// will behave exactly like minHeap

    m.push(9);
    m.push(8);
    m.push(7);
    m.push(6);
    m.push(5);
    m.push(4);
    m.push(3);
    m.push(2);
    m.push(1);

    cout << m.size() << endl;
    
    while(!m.empty()){
        cout << m.top() << " ";
        m.pop();
    }
    cout << endl;
    cout << m.size() << endl;
    return 0;
}