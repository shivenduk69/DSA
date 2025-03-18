#include<iostream>
using namespace std;
int main(){
    int n = 9;
    int arr[9] = {1,2,3,0,0,0,2,5,6};
    for(int i = 1; i < n; i++){
        int temp = arr[i];
        int j = i - 1;
        for(; j >=0; j--){
            if(arr[j] > temp){
                //shift
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}