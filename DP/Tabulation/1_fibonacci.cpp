// Online C++ compiler to run C++ program online
//using tabulation approach
#include <iostream>
using namespace std;
int fibo(int n){
    int table[n+1];
    table[0] = 0;
    table[1] = 1;
    for(int i = 2; i<=n; i++){
        table[i] = table[i-1] + table[i-2];
    }
    return table[n];
}
int main() {
    int n;
    cin >> n;
    cout << fibo(n) << endl;
    return 0;
}