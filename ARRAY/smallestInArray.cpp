#include<iostream>
#include<climits>
using namespace std;
int smallestInArray(){
    int size;
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    int smallest= INT_MAX;
    for(int i=0;i<size;i++){
        smallest=min(arr[i],smallest);//Using the minimum inbuilt function for c++
    }
    return smallest;
}
int main(){
    cout << smallestInArray() << endl;
    return 0;
}