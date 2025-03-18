#include<iostream>
using namespace std;
int main(){
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int n = sizeof(arr)/sizeof(int);
    int maxSum = 0;
    for(int st = 0; st < n; st++){
        int sum = 0;
        for(int end = st; end < n; end++){
            sum += arr[end];
            maxSum = max(maxSum, sum);
        }
    }
    cout << "maxsum is " << maxSum;
    return 0;
}