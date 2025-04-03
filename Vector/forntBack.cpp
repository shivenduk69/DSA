#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec = {1,2,3,45,5};
    //Printing first element of vector
    cout << vec.front() << endl;
    //Printing Last element of vector
    cout << vec.back() << endl;
    //at is an alternate way to access elements at an index of vector
    cout << vec.at(0) << endl;
    return 0;
}