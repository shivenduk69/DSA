//Reversing array by pointer approach
#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,33,4,54};
    int i=0;
    int j=5-1;
    while(i<j){
        swap(arr[i],arr[j]);//swap function used which is inbuilt in c++
        i++;
        j--;
    }
    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }
    return 0;
}