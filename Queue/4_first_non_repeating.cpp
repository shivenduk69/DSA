//int his program we will find first non repeating character in a stream.

#include<iostream>
#include<queue>
using namespace std;
void findStream(vector<char> &vec){
    queue<char> q;
    for(int i = 0; i<vec.size(); i++){
        if(!q.empty()){
            if(q.front() == vec[i]){
                q.pop();
                if(!q.empty()) vec[i] = q.front();
                else vec[i] = '1'; 
            }else{
                int temp = vec[i];
                vec[i] = q.front();
                q.push(temp);
            }
        }
        else{
            q.push(vec[i]);
        }
    }
}
int main(){
    int n;
    cin >> n;
    vector<char> vec(n);
    for(int i = 0; i<n; i++){
        cin >> vec[i];
    }
    findStream(vec);
    for(char i: vec){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}