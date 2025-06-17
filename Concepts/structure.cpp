//we use structure to declare a variable and we initialise structure as a datatype

#include<iostream>
using namespace std;
struct node{
    int age;
    string name;
};
int main(){
    node person;//person is a variable and node is it's datatype
    person.age = 20;
    person.name = "Shivendu";
    
    cout << person.name << endl;
    return 0;
}