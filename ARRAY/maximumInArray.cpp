#include<iostream>
#include<climits>
using namespace std;
int biggestInArray(){
    int size;
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    int biggest= -1;
    for(int i=0;i<size;i++){
        biggest= max(arr[i],biggest);
    }
    return biggest;
}
int main(){
    cout << biggestInArray();
    return 0;
}