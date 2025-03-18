//finding pivot in an array
#include<iostream>
using namespace std;
int findingPivot(int arr[], int n){
    int s = 0;
    int e = n-1;
    int ans = arr[0];
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else{
            ans = arr[mid];
            e = mid-1;
        }
    }
    return ans;

}
int main(){
    int n = 5;
    int arr[5] = {8, 10, 17, 1, 3};
    cout << "Pivot is : " << findingPivot(arr, n) << endl;
    return 0;
}