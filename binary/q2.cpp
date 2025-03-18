#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    int pow=1;
    int a=0;
    int b;
    while(n>0){
        b=n%10;
        a += b*pow;
        pow *= 2;
        n=n/10;
    }
    cout << "decimal no. is: " << a;
    return 0;
}