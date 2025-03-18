#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec = {1, 2, 3};
    cout << "Before pop" << endl;
    for(int i: vec){
        cout << i << " ";
    }
    cout << endl << "After Pop" << endl;
    vec.pop_back();
    for(int i : vec){
        cout << i << " ";
    }
    return 0;
}