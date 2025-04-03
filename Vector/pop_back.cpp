#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec = {1,2,3,4,5};
    cout << vec.size() << endl;
    vec.pop_back();//Delete element from last
    cout << vec.size() << endl;
    return 0;
}