// in this program we will implement the pop operation in a min heap

#include <iostream>
#include <vector>
using namespace std;
class minHeap
{
    vector<int> v;

    void heapify(int i)
    {
        int minIdx = i;
        int leftIdx = 2 * i + 1;
        if (leftIdx < v.size() and v[leftIdx] < v[minIdx])
        {
            minIdx = leftIdx;
        }
        int rightIdx = 2 * i + 2;
        if (rightIdx < v.size() and v[rightIdx] < v[minIdx])
        {
            minIdx = rightIdx;
        }

        if(minIdx != i){
            swap(v[i], v[minIdx]);
            heapify(minIdx);
        }
    }

public:
    void pop()
    {
        swap(v[0], v[v.size() - 1]);
        heapify(0);
    }
};