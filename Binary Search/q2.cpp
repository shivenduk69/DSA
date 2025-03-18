#include<bits/stdc++.h>
using namespace std;
int firstIndex(int arr[],int n,int k){
    int start = 0;
    int end = n-1;
    int mid = (start + (end - start)/2);
    int ans=-1;
    while(start<=end){
        if(arr[mid]==k){
            ans = mid;
            end = mid - 1;
            
        }
        else if(arr[mid] > k){
            end = mid-1;
        }
        if(arr[mid]<k){
            start = mid+1;
        }
        
        mid = start + (end - start)/2;
    }
    return ans;
}
int lastIndex(int arr[],int n,int k){
    int start = 0;
    int end = n-1;
    int mid = (start + (end - start)/2);
    int ans=-1;
    
    while(start<=end){
        if(arr[mid]==k){
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] > k){
            end = mid-1;
        }
        else if(arr[mid]<k){
            start = mid+1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    int k;
    cin >> k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << firstIndex(arr,n,k) << endl;
    cout << lastIndex(arr,n,k) << endl;

    return 0;
}