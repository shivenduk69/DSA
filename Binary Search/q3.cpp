#include<bits/stdc++.h>
using namespace std;
int firstIndex(int arr[],int n,int k){
    int start = 0;
    int end = n-1;
    int mid = (start + (end - start)/2);
    int ans=1;
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
    int ans=0;
    
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
    cout <<"total number of occurence of key is : " << lastIndex(arr,n,k) - firstIndex(arr,n,k) + 1 << endl;

    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1, 5, 7, 9, 11};
    int key = 9;
    int s = 0;
    int e = sizeof(arr)/sizeof(int)  - 1;
    int mid = s + (e - s)/2;
    while(s<=e){
        if(arr[mid]==key){
            cout << mid;
            return 0;
        }
        else if(key > arr[mid]){
            s  = mid + 1;
        }
        else if(key < arr[mid]){
            e = mid - 1;
        }
        mid = s + (e - s)/2;
        
    }

    return 0;
}

