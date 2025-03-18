#include<iostream>
using namespace std;
int prime(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "2 ";
    int b=0;
    for(int i=3;i<=n;i++){
        int a=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                a=1;
                break;
            }
        }
        if(a==0){
            cout << i << " ";
        }
        
    }
}
int main(){
    prime();
    return 0;
}