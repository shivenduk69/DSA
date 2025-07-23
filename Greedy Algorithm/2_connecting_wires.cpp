// in this program we will do a problem called connecting wires and will find the minimum length to connect all the white dots


#include<iostream>
#include<vector>
using namespace std;
int minLength(vector<int> &white, vector<int> &black){
    int n = white.size();
    int i = 0, j = 0, res = 0;
    while(i<n){
        int prev = j;
        int next = j == n-1 ? j : j+1;
        if(abs(white[i]-black[prev])<abs(white[i]-black[next]) || j==n-1){
            res += abs(white[i]-black[prev]); 
            i++;
        }else{
            j++;
        }
    }
    return res;
}
int main(){
    int n; cin >> n;
    vector<int> white(n);
    for(int i = 0; i<n; i++){
        cin >> white[i];
    }
    vector<int> black(n);
    for(int i = 0; i<n; i++){
        cin >> black[i];
    }
    cout << minLength(white, black) << endl;
    return 0;
}