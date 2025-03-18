#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;

    int a=0;
    int b;
    int pow=1;
    while(n>0){
        b=n%2;
        a=a+b*pow;
        pow *= 10;
        n=n/2;
    }
    cout << "Binary no. is : " << a;
    return 0;                                                                                                                                                                                                                                                                                                                                 
}