// in this program we are going to do another spoj problem called load balancing by greedy

// #include<iostream>
// #include<vector>
// #include<numeric>
// #include<climits>
// using namespace std;
// int main(){
//     while(true){
//         int n; cin >> n;
//         if(n==-1) break;
//         vector<int> v(n);
//         for(int i = 0; i<n; i++){
//             cin >> v[i];
//         }
//         int sum = accumulate(v.begin(), v.end(), 0);
        
//         if(sum%n != 0){
//             cout << -1 << endl;
//         }else{
//             int load = sum/n;
//             int prefixSum = 0;
//             int ans = INT_MIN;
//             for(int i = 0; i<n; i++){
//                 prefixSum += v[i];
//                 int prefixLoad = load*(i+1);
//                 ans = max(ans, abs(prefixSum-prefixLoad));
//             }
//             cout << ans << endl;
//         }
//     }
//     return 0;
// }


#include<iostream>
#include<vector>
#include<numeric>
#include<climits>
using namespace std;
int main(){
    int n, x;
    vector<int> v;
    while(true){
        cin >> n;
        if(n==-1) break;
        int sum = 0;
        for(int i = 0; i<n; i++){
            cin >> x;
            v.push_back(x);
            sum += v[i];
        }
        
        if(sum%n != 0){
            cout << -1 << endl;
            continue;
        }
        int load = sum/n;
        int prefixSum = 0;
        int ans = INT_MIN;
        for(int i = 0; i<n; i++){
            prefixSum += v[i];
            int prefixLoad = load*(i+1);
            ans = max(ans, abs(prefixSum-prefixLoad));
        }
        cout << ans << endl;
    
        v.clear();
    }
    return 0;
}