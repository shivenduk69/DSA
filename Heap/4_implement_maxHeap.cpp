// in this program we will implement maxHeap data structure

#include<iostream>
#include<vector>
using namespace std;
class maxHeap{
    vector<int> v;

    void heapify(int i){
        int maxIdx = i;
        int leftIdx = 2*i+1;
        if(leftIdx < v.size() and v[leftIdx] > v[maxIdx]){
            maxIdx = leftIdx;
        }
        int rightIdx = 2*i+2;
        if(rightIdx < v.size() and v[rightIdx] > v[maxIdx]){
            maxIdx = rightIdx;
        }

        if(maxIdx != i){
            swap(v[i], v[maxIdx]);
            heapify(maxIdx);
        }
    }
    public:

    void push(int val){
        v.push_back(val);
        int childIdx = v.size()-1;
        int parentIdx = childIdx%2==1 ? childIdx/2 : childIdx/2 - 1;
        while(parentIdx >=0 and v[parentIdx]<v[childIdx]){
            swap(v[parentIdx], v[childIdx]);
            childIdx = parentIdx;
            parentIdx = childIdx%2==1 ? childIdx/2 : childIdx/2 - 1;
        }
    }
    void pop(){
        swap(v[0], v[v.size()-1]);
        v.pop_back();

        //Ab delete karne ke bad isko maxHeap ka property bhi satify karao
        heapify(0);
    }
    int top(){
        return v[0];
    }
    int size(){
        return v.size();
    }
    bool empty(){
        return v.empty();
    }
};

int main(){
    maxHeap m;
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