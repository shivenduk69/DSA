#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter n: ";
    cin >> n;
    bool flag = false;
    if(n==1){
        cout << "It is neither prime nor odd" << endl;
        return 0;
    }
    if(n==2){
        cout << "The no is a composite no." << endl;
        return 0;
    }
    for(int i=2;i<n;i++){
        if((n%i) ==0){
            flag=true;
            break;
        }
    }
    if(flag==false){
        cout << "The no. is prime" << endl;
    }
    else{
        cout << "The no. is composite" << endl;
    }
    return 0;
    
}