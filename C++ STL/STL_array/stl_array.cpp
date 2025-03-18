#include<iostream>
#include<array>//implementation of array
using namespace std;
int main(){
    array <int, 4> arr = {1, 2, 3, 4};
    int size = arr.size();
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << arr.at(2) << endl;//specific index value
    cout << arr.front() << endl;
    cout << arr.back() << endl;
    cout << arr.empty() << endl;

    return 0;
}