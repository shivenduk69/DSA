// in this program we are going to implement heap sort

#include <iostream> 
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
    vector<int> v = {5, 3, 4, 1, 2};
    int n = v.size();
    // 1. Transform the array into a maxheap
    //we have seen in the preious program that this step takes O(N) time
    for(int i = n-1; i>=0; i--){
        heapify(v, n, i);
    }
    // 2.Transform the maxheapp into a sorted array
    // loop takes O(N) time
    int heapSize = n;
    while(n>1){
        swap(v[0], v[n-1]);
        n--;
        // heapify takes O(logN) time
        heapify(v, n, 0);
    }
    //3. print the array
    for(int i: v){
        cout << i << " ";
    }
    return 0;
}