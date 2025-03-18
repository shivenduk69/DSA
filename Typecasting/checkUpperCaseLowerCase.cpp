#include<bits/stdc++.h>
using namespace std;
int main(){
    char character;
    cin >> character;
    if(character >='a' && character <='z'){
        cout << character << " is a lower case alphabet" << endl;
    }
    else if(character >= 'A' && character <='Z'){
        cout << character << " is a upperCase alphabet" << endl;
    }
    else{
        cout << "Entered character is not an alphabet" << endl;
    }
    return 0;
}