#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> deq = {1, 2, 3, 4, 5};
    cout << deq[0] << endl;//Random access is possible

    for(int i:deq){//for each loop is working in deque
        cout << i << " ";
    }
    cout << endl;

    deq.pop_back();
    for(int i: deq){
        cout << i << " ";
    }
    cout << endl;

    deq.pop_front();
    for(int i:deq){
        cout << i << " ";
    }

    return 0;
}