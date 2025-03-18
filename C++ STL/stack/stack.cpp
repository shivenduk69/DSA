#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack <string> s;

    s.push("Shivendu");
    s.push("Kumar");
    s.push("Sharma");

    cout << "Element at top : " << s.top() << endl;//Last in first out 

    s.pop();
    cout << "Element at top after pop : " << s.top() << endl;//After pop

    cout << "Size of stack : " << s.size() << endl;

    cout << "Is Empty " << s.empty() << endl;

    return 0;
}