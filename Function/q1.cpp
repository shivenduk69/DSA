#include<iostream>
using namespace std;
unsigned long long factorial(int n){
    if(n==0) return 1;
    return n*factorial(n-1);
}
unsigned long long ncr(){
    int n,r;
    cout << "Enter n and r : ";
    cin >> n >> r;
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int main(){
    cout << "nCr = " << ncr() << endl;
    return 0;
}