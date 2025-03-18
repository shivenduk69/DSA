#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n: " ;
    cin >> n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout << "Sum of 1st n is: " << sum;
    return 0;
}