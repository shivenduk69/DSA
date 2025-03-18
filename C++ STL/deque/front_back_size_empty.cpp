#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque <int> deq = {1, 2, 3, 4, 5};
    cout << "front int is : " << deq.front() << endl;
    cout << "back int is : " << deq.back() << endl;
    cout << "size of deq is : " << deq.size() << endl;
    cout << "Maximum size of deq is : " << deq.max_size() << endl;//maximum size tells the maximum value which can be stored in deque
    cout << "Is empty : " << deq.empty() << endl;
    return 0;
}