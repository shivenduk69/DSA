//We use new keyword to dyanamically allocate memory in c++
#include<iostream>
using namespace std;
int main(){
    int *ptr = new int[5000];//returns an address at run time from heap;
    delete []ptr;
    return 0;
}