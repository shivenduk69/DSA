#include<iostream>
using namespace std;
int largestIndex(int arr[], int n){
    int s = 0;
    int e = n-1;
    int m = s + (e - s)/2;
    while(s <= e){
        if((arr[m] > arr[m+1]) && (arr[m] > arr[m-1])){
            return m;
        }
        else if(arr[m] < arr[m + 1]){
            s = m + 1;
        }
        else if(arr[m] > arr[m+1]){
            e = m;
        }
        m = s + (e - s)/2;
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << largestIndex(arr, n);
    return 0;
}
