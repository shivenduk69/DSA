//in this program we are going to find nearest smaller element to the right

#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void nearestsmallerRight(vector<int> &vec){
    int n = vec.size();
    stack<pair<int, int>> s;
    for(int i = n-1; i>=0; i--){
        while(!s.empty() and s.top().first>vec[i]){
            s.pop();
        }
        if(!s.empty()){
            int temp = s.top().second;
            s.push(make_pair(vec[i], i));
            vec[i] = temp;
        }else{
            s.push(make_pair(vec[i], i));
            vec[i] = n;
        }
    }

}

//We can also do the same withour using pair int 

// void nearestsmallerRight(vector<int> &vec){
//     int n = vec.size();
//     stack<int> s;
//     for(int i = n-1; i>=0; i--){
//         while(!s.empty() and vec[s.top()]>=vec[i]){
//             s.pop();
//         }
//         if(!s.empty()){
//             vec[i] = s.top();//Doubt- >why can we not do this
//         }else{
//             vec[i] = n;
//         }
//         s.push(i);
//     }

// }
int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i<n; i++){
        cin >> vec[i];
    }
    nearestsmallerRight(vec);
    for(int i: vec) cout << i << " ";
    cout << endl;
    return 0;
}