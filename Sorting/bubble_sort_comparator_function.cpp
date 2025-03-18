#include<iostream>
using namespace std;
bool should_i_swap(int a, int b){
    if(a>b) return true;///this line will decide we have to sort in ascending or descending order
    return false;
}
int main(){
    int n = 5;
    int arr[n] = {6, 3, 7, 2, 8};
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-1-i; j++){
            if(should_i_swap(arr[j], arr[j+1])){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}