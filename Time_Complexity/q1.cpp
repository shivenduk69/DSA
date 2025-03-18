//from array arr[8]={1,3,-2,4,6,5,3,-8}, make possible subarrays of size 3 and find maximum possible sum(time complexity O(N))
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[8]={1,3,-2,4,6,5,3,-8};
    int n=8;
    int k=3;
    int max= INT_MIN;
    int sum=0;
    for(int i=0;i<k;i++){
        sum+= arr[i];
    }
    if(max<sum){
        max=sum;
    }
    for(int i=k;i<n;i++){
        sum -= arr[i-k];
        sum += arr[i];
        if(max<sum){
            max=sum;
        }
    }
    cout << "Maxm sum is: " << max;
    return 0;
}
