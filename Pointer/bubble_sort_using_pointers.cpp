#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[n] = {5, 4, 3, 2, 1};
    for(int i = 0; i<n-1; i++){
        int flag = 1;
        for(int j = 0; j<n-1-i; j++){
            if(*(arr+j)>*(arr+j+1)){
                flag = 0;
                swap(*(arr+j), *(arr+j+1));
            }
        }
        if(flag==1) break;
    }
    for(int i = 0; i<n; i++){
        cout << *(arr+i) << " ";
    }
    cout << endl;
    return 0;
}