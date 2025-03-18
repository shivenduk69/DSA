#include<iostream>
#include<queue>
using namespace std;
int main(){
    //Max Heap
    priority_queue <int> maxi;

    maxi.push(4);
    maxi.push(5);
    maxi.push(2);
    maxi.push(0);
    int size = maxi.size();
    for(int i = 0; i<size; i++){
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;
    //Min Heap
    priority_queue<int, vector<int>, greater<int> > mini;
    mini.push(4);
    mini.push(5);
    mini.push(2);
    mini.push(0);
    int siz = mini.size();
    for(int i = 0; i<siz; i++){
        cout << mini.top() << " ";
        mini.pop();
    }

    return 0;
}