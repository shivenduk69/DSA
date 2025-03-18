#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec = {1, 2, 3, 4};
    cout << "Current size of vector is : " << vec.size() << endl;
    vec.clear();
    cout << "Size of vector after clear is : " << vec.size() << endl;
    //Vector ko clear karne ke bad size 0 hota hai par capacity 0 nahi hota hai
    cout << "Capacity of vector after clear is : " << vec.capacity() << endl;
    
    return 0;
}