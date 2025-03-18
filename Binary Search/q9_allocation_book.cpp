#include<iostream>
#include<vector>
using namespace std;
int isValid(int mid, vector<int> &arr,int n, int m){
    int student = 1;
    int pages = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] > mid){
            return false;
        }
        if(pages + arr[i] <= mid){
            pages += arr[i];
        }
        else{
            pages = arr[i];
            student++;
        }
        
    }
    return student >  m ? false : true;
}
int findPages(vector<int>& arr, int n, int m) {
    if(m > n) return -1;
    int s = 0;
    int e = 0;
    int ans = -1;
    for(int i: arr){
        e += i;
    }
    
    while(s <= e){
        int mid = s + (e-s)/2;
        if(isValid(mid, arr,n, m)){
            e = mid-1;
            ans = mid;
        }
        else{
            s = mid + 1;
        }
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<int> arr;
    int x;
    for(int i = 0; i<n; i++){
        cin >> x;
        arr.push_back(x);
    }
    cout << findPages(arr, n, m) << endl;
    return 0;
}

