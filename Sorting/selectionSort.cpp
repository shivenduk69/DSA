#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[5] = {5, 4, 2, 1, 3};
    //we have to sort in ascending order
    
    for(int i = 0; i < 5-1; i++){
        int minIndex = i;
        for(int j = i+1; j < 5; j++){
            if(arr[minIndex]>arr[j]){
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    return 0;
}