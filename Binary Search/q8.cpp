#include<iostream>
using namespace std;

int squareRoot(int x){
    int s = 0;
    int e = x;
    long long int mid = s + (e - s)/2;
    long long int ans = -1;
    while(s <= e){
        long long int square = mid * mid;
        if(square == x){
            return mid;
        }
        if(square < x){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}

double mostPrecise(int x, int precision, int tempSol){
    double factor = 1;
    double ans = tempSol;
    for(int i=0;i<precision;i++){
        factor /= 10;
        for(double j = ans; j * j <x;j = j + factor){
            ans = j;
        }
    }
    return ans;
}
int main(){
    int x;
    cin >> x;
    int tempSol = squareRoot(x);
    cout << "Rational square root is : " << mostPrecise(x, 3, tempSol );
    return 0;
}