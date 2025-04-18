//define a function for linear search which will search for different type of array

#include<iostream>
using namespace std;

//defining template
template<typename T>

//function Linear Search
int find(T arr[], int n, T key){
    for(int i = 0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}
int main(){
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};

    cout << find(arr, n, 2) << endl;

    char brr[n] = {'a', 'b', 'e', 'd', 'c'};

    cout << find(brr, n, 'c') << endl;
    return 0;
}