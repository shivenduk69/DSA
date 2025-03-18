
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    if( (n & (n-1))==0 ){
        cout << "No. is in the power of 2";
    }
    else{
        cout << "No. is not in the power of 2";
    }
    
    return 0;
}