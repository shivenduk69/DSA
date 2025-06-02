//in this program we will find maximum for each and every part of continuous subarray
#include<iostream>
#include<deque>
#include<vector>
using namespace std;

void maximumSubarray(vector<int>& vec, int k) {
    deque<int> dq;  // Stores indices
    vector<int> result;
    int n = vec.size();

    for (int i = 0; i < n; ++i) {
        // Remove elements out of current window
        if (!dq.empty() && dq.front() <= i - k)
            dq.pop_front();

        // Remove all elements smaller than current from the back
        while (!dq.empty() && vec[dq.back()] < vec[i])
            dq.pop_back();

        // Add current element at the back of the deque
        dq.push_back(i);

        // Store result from kth element onward
        if (i >= k - 1)
            result.push_back(vec[dq.front()]);
    }

    // Print result
    for (int i : result)
        cout << i << " ";
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    int k;
    cin >> k;
    maximumSubarray(vec, k);
    return 0;
}
