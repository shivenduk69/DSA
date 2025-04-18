#include<iostream>
#include<list>
using namespace std;
int main(){

    //create an empty doubly linkedlist
    list<int> l1;

    //check size
    cout << " size is " << l1.size() << endl;

    //Insert data at the head
    l1.push_front(20);
    l1.push_front(10);

    //Insert data at the back
    l1.push_back(30);
    l1.push_back(40);

    cout << "Size is " << l1.size() << endl;
    
    //Access the element at the head
    cout << "Head = " << l1.front() << endl;

    //Access the element at back
    cout << "Back = " << l1.size() << endl;
    
    //Iterate over the list using iterator
    for(auto it = l1.begin(); it != l1.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    //Iterate using for-each loop
    for(int x: l1){
        cout << x << " ";
    }
    cout << endl;

    //remove data from the head
    l1.pop_front();
    //Remove data from the end()
    l1.pop_back();

    for(auto it = l1.begin(); it != l1.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    
    //create a list of size 3 with all it's values 100
    list<int> l2(3, 100);
    for(auto it = l2.begin(); it != l2.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    //Create a list using initializer list
    list <int> l3 = {1, 2, 3, 4, 5};
    for(auto it = l3.begin(); it != l3.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}