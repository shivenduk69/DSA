//in this program we are going to find nearest element to the left

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

// void smallerToLeft(int arr[], int n){
//     vector<int> store;
//     stack<pair<int, int>> s;
//     for(int i = 0; i<n; i++){
//         while(!s.empty() and s.top().first >= arr[i]){
//             s.pop();
//         }
//         if(!s.empty()){
//             store.push_back(s.top().second);
//         }else{
//             store.push_back(-1);
//         }
//         s.push({arr[i], i});
//     }
//     for(int i: store){
//         cout << i << " ";
//     }
//     cout << endl;
// }

//we can also do the same without using pair int in stack
void smallerToLeft(int arr[], int n){
    vector<int> store;
    stack<int> s;
    for(int i = 0; i<n; i++){
        while(!s.empty() and arr[s.top()] >= arr[i]){
            s.pop();
        }
        if(!s.empty()){
            store.push_back(s.top());
        }else{
            store.push_back(-1);
        }
        s.push(i);
    }
    for(int i: store){
        cout << i << " ";
    }
    cout << endl;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    smallerToLeft(arr, n);
    return 0;
}