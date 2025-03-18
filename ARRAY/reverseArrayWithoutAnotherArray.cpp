#include<iostream>
using namespace std;
int main(){
    int arr[5]= {4,3,6,3,7};
    for(int i=0;i<5/2;i++){
        swap(arr[i],arr[5-1-i]);//swap function used which is inbuilt in c++
    }
    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }
    return 0;
}