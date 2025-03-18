#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec;
    cout << "In starting" <<endl;
    cout << vec.capacity() << endl;
    cout << vec.size() << endl;
    cout << "After first push_back" << endl;
    vec.push_back(1);
    cout << vec.capacity() << endl;
    cout << vec.size() << endl;
    cout << "After 2nd push_back" << endl;
    vec.push_back(2);
    cout << vec.capacity() << endl;
    cout << vec.size() << endl;
    cout << "After 3rd pushback" << endl;
    vec.push_back(3);
    cout << vec.capacity() << endl;
    cout << vec.size() << endl;

    cout <<"at index 2 ->"  << vec.at(2) << endl;

    cout << "1st Element->" << vec.front() << endl;

    cout << "2nd Element->" << vec.back() << endl;

    cout << "Is Empty->" << vec.empty() << endl;

    



    return 0;
}