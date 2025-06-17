// //finding nth fibonacci number using memoization

// #include<iostream>
// #include<vector>
// using namespace std;
// int fibRec(int n, vector<int> &memo){
//     if(n <= 1) return n;
//     if(memo[n] != -1) return memo[n];

//     return memo[n] = fibRec(n-1, memo) + fibRec(n-2, memo);
// }
// int fibo(int n){
//     vector<int> memo(n+1, -1);
//     return fibRec(n, memo);
// }
// int main(){
//     int n;
//     cin >> n;
//     cout << fibo(n) << endl;
//     return 0;
// }

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int cost(int arr[], int n, int i){
    if(i >= n-1) return 0;
    
    int c1 = abs(arr[i]-arr[i+1])+cost(arr, n, i+1);
    
    int c2 = abs(arr[i]-arr[i+2])+cost(arr, n, i+2);
    
    return min(c1, c2);
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    cout << cost(arr, n, 0) << endl;
    return 0;
}