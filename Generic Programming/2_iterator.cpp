//with the help of iterator we can use any data structure in generic programming
//In this program we will see again Linear search but for all data types of container

#include<iostream>
#include<list>
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

    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);

    auto it = search(l.begin(), l.end(), 2);
    if(it != l.end()){
        cout << "Item found" << endl;

    }
    else{
        cout << "Item not found" << endl;
    }

    return 0;
}