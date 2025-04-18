#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;
int main(){

    //Create an empty forward List
    forward_list<int> l1;
    //finding size of LL
    cout << "Size is " << distance(l1.begin(), l1.end()) << endl;

    //insert or add at front or head of LL
    l1.push_front(50);
    l1.push_front(40);
    l1.push_front(30);
    l1.push_front(20);
    l1.push_front(10);

    cout << "Size is " << distance(l1.begin(), l1.end()) << endl;


    //front element of LL
    cout << "Front element is " << l1.front() << endl;
    //Iterate over the forward_list using iterator
    //auto keyword determines automatically data type of variable according to its value
    for(auto it = l1.begin(); it != l1.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    //Delete from front

    l1.pop_front();
    l1.pop_front();
    cout << " Size is " << distance(l1.begin(), l1.end()) << endl;
    for(auto it = l1.begin(); it != l1.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    //clear the forward list
    l1.clear();
    cout << "size is " << distance(l1.begin(), l1.end()) << endl;

    //check if list is empty
    cout << "Is list empty : " << l1.empty() << endl;

    //Create a list using fill constructor
    forward_list<int> l2(3, 100);//creates a forward list with all values 100 of size 3
    cout << "Size is " << distance(l2.begin(), l2.end()) << endl;

    //Iterate over LL
    for(auto it = l2.begin(); it != l2.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    forward_list<int> l3(4);//creates a forward list of size 4 and values 0

    cout << "Size is " << distance(l3.begin(), l3.end()) << endl;

    //Iterate over the LL
    for(auto it = l3.begin(); it != l3.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    //Create a list using initialiser list
    forward_list<int> l4 = {1, 2, 3, 4};
    cout << "Size is " << distance(l4.begin(), l4.end()) << endl;



    return 0;
}