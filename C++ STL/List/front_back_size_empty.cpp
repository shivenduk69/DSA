#include<iostream>
#include<list>
using namespace std;
int main(){
    list <int> l;

    l.push_back(1);
    l.push_front(2);

    cout << "0th index element is : " << l.front() << endl;
    cout << "last element is : " << l.back() << endl;
    cout << "Is empty " << l.empty() << endl;
    cout << "size of list is : " << l.size() << endl;
    l.clear();
    cout << "Is Empty : " << l.empty() << endl;
    return 0;
}