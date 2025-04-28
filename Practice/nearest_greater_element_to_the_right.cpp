#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void nearestGreaterleft(vector<int> &vec){
    stack<int> s;
    int n = vec.size();
    //for right
    // for(int i = n-1; i>=0; i--){
    //     if(!s.empty() and s.top()<vec[i]){
    //         while(!s.empty() and s.top()<vec[i]){
    //             s.pop();
    //         }
    //         if(s.empty()){
    //             s.push(vec[i]);
    //             vec[i] = -1;
    //         }else{
    //             int temp = vec[i];
    //             vec[i] = s.top();
    //             s.push(temp);
    //         }
            
    //     }else{
    //         if(s.empty()){
    //             s.push(vec[i]);
    //             vec[i] = -1;
    //         }else{
    //             int temp = vec[i];
    //             vec[i] = s.top();
    //             s.push(temp);

    //         }

    //     }

    // }

    //for left
    for(int i = 0; i<n; i++){
        if(!s.empty() and vec[i]>s.top()){
            while(!s.empty() and vec[i]>s.top()){
                s.pop();
            }
            if(s.empty()){
                s.push(vec[i]);
                vec[i] = -1;
            }else{
                int temp = vec[i];
                vec[i] = s.top();
                s.push(temp);
            }
        }else{
            if(s.empty()){
                s.push(vec[i]);
                vec[i] = -1;
            }else{
                int temp = vec[i];
                vec[i] = s.top();
                s.push(temp);
            }
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
    nearestGreaterleft(vec);
    for(int i: vec) cout << i << " ";
    cout << endl;
    return 0;
}