#include<iostream>
#include<list>
using namespace std;
int main(){
    list <int> l(5, 100);//intialise 5 size by 100 each
    cout << "Before pop front : " ;
    for(int i : l){
        cout << i << " ";
    }
    
    l.pop_front();
    cout <<endl << "After pop_front : ";
    for(int i : l){
        cout << i << " ";
    } 
    l.pop_back();
    cout <<endl << "After pop_back ";
    for(int i : l){
        cout << i << " ";
    }
    return 0;
}