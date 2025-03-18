#include<iostream>
using namespace std;
int sumOfDigits(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    int sum=0;
    for(int i=1;n>0;i++){
        sum += (n%10);
        n=n/10;
    }
    return sum;

}

int main(){
    cout <<"Sum of digits is: " << sumOfDigits();
    return 0;
}