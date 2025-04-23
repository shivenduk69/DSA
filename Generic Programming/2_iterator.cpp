//with the help of iterator we can use any data structure in generic programming
//In this program we will see again Linear search but for all data types of container


//This program will search for all data structure
#include<iostream>
#include<list>
#include<vector>
using namespace std;

//defining template 1st is for data structure and second for data type of data structure
template<typename iterator, typename T>

iterator search(iterator begin, iterator end, T key){

    for(iterator it = begin; it != end; it++){
        if(*it == key){
            return it;
        }
    }
    return end;
}
int main(){
    //For List
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    cout << "Searching for list" << endl;
    auto it = search(l.begin(), l.end(), 2);
    if(it != l.end()){
        cout << "Item found" << endl;

    }
    else{
        cout << "Item not found" << endl;
    }

    //for vector
    vector<int> vec = {1, 2, 3, 4, 5};
    auto vit = search(vec.begin(), vec.end(), 2);
    
    cout << "searching for vector" << endl;

    if(vit != vec.end()){
        cout << "Item found" << endl;

    }
    else{
        cout << "Item not found" << endl;
    }
    return 0;
}