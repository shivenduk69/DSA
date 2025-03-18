#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[n] = {5, 4, 3, 2, 1};
    for(int i = 1; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        int a = 0;
        for(; j>=0; j--){
            if(arr[j]>temp){
                a=1;
                arr[j+1] = arr[j];
            }
        }
        if(a==0) break;
        arr[j+1] = temp;
    }
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}