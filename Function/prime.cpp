#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    int a=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            a=1;
            break;
        }
        
    }
    if(a==1){
        printf("No. is composite");
    }
    else if(a==0){
        printf("No. is prime");
    }
    return 0;
}