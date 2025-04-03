#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec;//size = 0 & capacity = 0
    cout << vec.capacity() << endl;
    vec.push_back(12);//size = 1 & capacity = 1
    cout << vec.capacity() << endl;
    vec.push_back(23);//size = 2 & capacity = 2
    cout << vec.capacity() << endl;
    vec.push_back(16);//size = 3 & capacity = 4
    cout << vec.capacity() << endl;
    vec.push_back(26);//size = 4 & capacity = 4 (element recide in empty space)
    cout << vec.capacity() << endl;
    vec.push_back(56);//size = 5 & capacity = 8
    cout << vec.capacity() << endl;
    return 0;
}