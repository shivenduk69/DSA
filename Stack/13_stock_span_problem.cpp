//in this program we are going to implement code for stock span problem

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void stockSpan(vector<int> &arr){
    stack<pair<int, int>> s;
    int n = arr.size();
    for(int i = 0; i<n; i++){
        while(!s.empty() and s.top().first < arr[i]){
            s.pop();
        }
        int j;
        if(!s.empty()){
            
            j = s.top().second;

        }else{
            j = -1;
        }

        s.push({arr[i], i});//or we can also use make_pair() function
        //s.push(make_pair(arr[i], i));
        arr[i] = i-j;
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    stockSpan(arr);
    for(int i:arr) cout << i << " ";
    cout << endl;
    return 0;
}