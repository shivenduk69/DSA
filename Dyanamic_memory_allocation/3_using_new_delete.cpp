#include<iostream>
using namespace std;
int main(){
    //Static allocation - allocation and deallocation both done by the compiler
    int arr[100];
    //int arr[100] = {0}--> to initialise all elements with 0
    cout << sizeof(arr) << endl;
    cout << arr << endl;//symbol table
    //Here arr cannot be overwritten bcoz it is a constant and a part of read only memory

    //Dyanamic Memory Allocation
    int n;
    cin >> n;
    int *a = new int[n];//a is pointer and created inside static memory but array is inside the heap memory
    //int *a = new int[n]{0};--> to initialise with all zero
    cout << sizeof(a) << endl;
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    for(int i = 0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    cout << a << endl;
    // variable a that is created inside the static memory can be overwritten 
    //eg. a = new char[30]

    //freeup the memory
    delete [] a;
    return 0;
}