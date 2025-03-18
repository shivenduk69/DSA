#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    int count=1;
    int sum=0;
    while(count <=n){
        sum+=count;
        count++;
    }
    cout << "sum is: " << sum;

    return 0;
}