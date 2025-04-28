//in this program we are going to implement nearest greatest element to the right

#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void nearestToLeft(vector<int> &vec){
    int  n = vec.size();
    stack<int> s;
    for(int i = 0; i<n; i++){
        while(!s.empty() and s.top()<vec[i]){
            s.pop();
        }
        if(!s.empty()){
            int temp = s.top();
            s.push(vec[i]);
            vec[i] = temp;
        }else{
            s.push(vec[i]);
            vec[i] = -1;
        }
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i<n; i++){
        cin >> vec[i];
    }
    nearestToLeft(vec);

    for(int i: vec){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}