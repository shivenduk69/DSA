#include<iostream>
#include<algorithm>
using namespace std;
int makeChange(int *coins, int n, int money){
    int ans = 0;
    while(money > 0){
        int idx = upper_bound(coins, coins+n, money) - 1 - coins;
        cout << coins[idx] << " ";
        money = money-coins[idx];
        ans++;
    }
    cout << endl;
    return ans;
} 
int main(){
    int money; cin >> money;

    int coins[] = {1, 2, 5, 10, 20, 50, 100, 500};
    int t = sizeof(coins)/sizeof(int);
    cout << makeChange(coins, t, money) << "-> this much number of coins are needed to make this much amount of money";
    return 0;
}