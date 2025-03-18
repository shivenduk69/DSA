#include<iostream>
#include<list>
using namespace std;
int main (){
    list <int> l = {1, 2, 3, 4};
    cout << "Before Erase : " ;
    for(int i: l){
        cout << i << " ";
    }
    l.erase(l.begin());
    cout << endl << "After Erase : " ;
    for(int i: l){
        cout << i << " ";
    }
    return 0;
}