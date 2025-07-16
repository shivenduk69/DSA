//in this program we will implement the operation inside a min heap

#include<iostream>
#include<vector>
using namespace std;
class minHeap{
    vector<int> v;
    public:

    void push(int val){
        v.push_back(val);
        int child_idx = v.size()-1;
        int parent_idx = child_idx%2 == 1 ? child_idx/2 : child_idx/2 - 1;
        while(parent_idx>=0 and v[child_idx]>v[parent_idx]){
            swap(v[child_idx], v[parent_idx]);
            child_idx = parent_idx;
            parent_idx = child_idx%2 == 1 ? child_idx/2 : child_idx/2 - 1;
        }
    }
};