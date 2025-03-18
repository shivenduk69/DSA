#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6};
    int target = 5;
    int i = 0;
    int j = sizeof(arr)/sizeof(int);
    while(i<=j){
        if((arr[i]+arr[j])==target){
            cout << i << " ," << j;
            return 0;
        }
        else if((arr[i] + arr[j])>target){
            j--;
        }
        else{
            i++;
        }
    }
    return 0;
}