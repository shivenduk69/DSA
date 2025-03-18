// #include<iostream>
// using namespace std;

// int binarySearch(int arr[], int n, int key){
//     int start = 0;
//     int end = n-1;
//     int mid = start + ( end - start)/2;
//     while(start <= end){
//         if(arr[mid] == key){
//             return mid;
//         }
//         if(arr[mid] > key){
//             end = mid - 1;
//         }
//         else{
//             start = mid + 1;
//         }
//         mid = start + (end - start)/2;
//     }
//     return -1;//returning -1 if no is not found
// }
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int key;//key whose binary index to be found
//     cin >> key;
//     cout << binarySearch(arr,n,key) << endl;
//     return 0;
// }

#include<iostream>
using namespace std;

int keyIndex(int arr[],int key,int n){
    int s = 0;
    int e = n - 1;
    int m = s + (e - s)/2;
    for(int i=s, j = e;i<=j;m = i + (j - i)/2){
        if(arr[m] == key){
            return m;
        }
        else if(key > arr[m]){
            i = m + 1;
        }
        else{
            j = m - 1;
        }
    }
    cout << "Not found";
    return -1;
}
int main(){
    int n;
    cin >> n;
    int key;
    cin >> key;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int index = keyIndex(arr,key,n);
    if(index != -1){
        cout << index;
    }
    return 0;
}