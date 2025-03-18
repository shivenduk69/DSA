#include<iostream>
using namespace std;
int reverse(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    int c=n;
    int count=0;
    while(n>0){
        count++;
        n /= 10;
    }
    int b=1;
    for(int i=1;i<count;i++){
        b = b*10;
    }
    int a=0;
    int rnum=0;

    while(c>0){
        a=c%10;
        rnum += a*b;
        b=b/10;
        c=c/10;
    }
    return rnum;
}
int main(){
    cout << "Reverse no. is: " << reverse();
    return 0;
}