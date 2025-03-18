#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,-4,5,4,-1,7,-8};
    int n = sizeof(arr)/sizeof(int);
    int sum = 0;
    for(int st = 0;st < n; st++){
        for(int end = st; end < n; end++){
            int maxSum = 0;
            for(int i=st;i <= end;i++){
                maxSum += arr[i];
            }
            if(maxSum > sum){
                sum = maxSum;
            }
        }
    }
    cout << "Maxsum is: " << sum;
    return 0;
}