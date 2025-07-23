// // in this problem we are going to use greedy approach to find the bankness of the ranklist

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     int t, n, x; cin >> t;
//     vector<int> v;
//     while(t--){
//         cin >> n;
//         for(int i = 0; i<n; i++){
//             string s;
//             getline(cin, s, ' ');
//             cin >> x;
//             v.push_back(x);
//         }
//         sort(v.begin(), v.end());
//         long long int res = 0;
//         for(int i = 0; i<n; i++){
//             res += abs(i+1-v[i]);
//         }
//         cout << res << endl;
//         v.clear();
//     }
//     return 0;
// }


//Counting sort

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t, n, x; cin >> t;
    
    while(t--){
        cin >> n;
        vector<int> v(n+1, 0);
        for(int i = 1; i<=n; i++){
            string s;
            getline(cin, s, ' ');
            cin >> x;
            v[x]++;
        }
        
        long long int res = 0;
        int j = 1;
        for(int i = 1; i<=n; i++){
            while(v[i]!=0){
                res += abs(j-i);
                j++, v[i]--;
            }
        }
        cout << res << endl;
    }
    return 0;
}
