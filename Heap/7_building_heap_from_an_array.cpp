// in this program we are going to implement a max heap from an array

#include<iostream>
#include<vector>
using namespace std;
void heapify(vector<int> &v, int n, int i){
    int maxIdx = i;
    int leftIdx = 2*i+1;
    if(leftIdx < n and v[leftIdx] > v[maxIdx]){
        maxIdx = leftIdx;
    }
    int rightIdx = 2*i+2;
    if(rightIdx < n and v[rightIdx] > v[maxIdx]){
        maxIdx = rightIdx;
    }
    if(maxIdx != i){
        swap(v[maxIdx], v[i]);
        heapify(v, n, maxIdx);
    }
}
int main(){
    vector<int> v = {10, 20, 50, 30, 40};
    int n = v.size();
    for(int i = n-1; i>=0; i--){
        heapify(v, n, i);
    }
    for(int i: v){
        cout << i << " ";
    }
    return 0;
}