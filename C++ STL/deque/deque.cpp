#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> deq;
    deq.push_front(1);
    deq.push_back(2);

    cout << "Element at 0th Index : " << deq[0] << endl;
    cout << "Element at 1st Index : " << deq.at(1) << endl;
    return 0;
}