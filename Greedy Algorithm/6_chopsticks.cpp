// in this program we are going to solve a codechef problem called chopsticks

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	vector<int> v(n);
	for(int i = 0; i<n; i++){
	    cin >> v[i];
	}
	sort(v.begin(), v.end());
	int ans = 0;
	for(int i = 1; i<n;){
	    if(v[i]-v[i-1] <= k){
	        i += 2;
	        ans++;
	    }else{
	        i++;
	    }
	}
    cout << "Answer is " << ans << endl;
	return 0;
}
