#include<iostream>
using namespace std;
class listnode{
    public:
    int val;
    listnode* next;

    listnode(int val){
        this->val = val;
        this->next = NULL;
    }
};
int main(){
    listnode* head = new listnode(10);
    cout << head->val << endl;
    return 0;
}