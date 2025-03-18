#include<iostream>
using namespace std;
class Solution{
public:
    double findingPower(double x, long n){
        if(n<0){
            n = -n;
            x = 1/x;
        }
        
        if(n==0) return 1;
        double halfpower = findingPower(x, n/2);
        if(n%2==0){
            
            return halfpower*halfpower;
        }
        return x*halfpower*halfpower;
    }
    double myPow(double x, int n){
        if(x==0) return 0;
        if(n==0) return 1;
        return findingPower(x, n);
    }
};
int main(){
    double x;
    cin >> x;
    int n;
    cin >> n;
    Solution s;
    cout << s.myPow(x, n) << endl;
    return 0;
}