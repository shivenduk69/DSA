#include<iostream>
using namespace std;
void uniqueElementsInArray(){
    int size;
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    int a=0;
    int n=2;
    int k=1;
    int brr[n];
    brr[0]=arr[0];
    for(int i=1;i<size;i++){
        
    }
    for(int i=0;i<n;i++){
        cout << brr[i] << " ";
    }
}
int main(){
    uniqueElementsInArray();
    return 0;
}