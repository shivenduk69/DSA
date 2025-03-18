#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque <int> deq = {1, 2, 3, 4, 5};
    deq.erase(deq.begin(), deq.begin()+2);//shuruat se 2 aage tk delete karega
    for(int i:deq){
        cout << i << " ";
    }

    return 0;
}