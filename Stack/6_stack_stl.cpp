//in this program we are going to see stack stl provided by c++

#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << "Size is " << s.size() << endl;
    cout << "top is " << s.top() << endl;
    cout << "is empty " << s.empty() << endl;

    s.pop();
    
    cout << "top " << s.top() << endl;
    return 0;
}