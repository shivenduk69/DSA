//We have to detect if cycle is present or not in the program
//Using two pointer Approach
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
bool isCyclePresent(listnode* head){
    listnode* slow = head;
    listnode* fast = head;

    while(fast != NULL and fast->next != NULL){
        slow  = slow->next;
        fast = fast->next->next;

        if(slow==fast){
            return true;
        }

    }
    return false;
}
int main(){
    listnode* head = new listnode(10);
    head->next = new listnode(20);
    head->next->next = new listnode(30);
    head->next->next->next = new listnode(40);
    head->next->next->next->next = new listnode(50);
    head->next->next->next->next->next = head->next->next;
    isCyclePresent(head) ? cout << "Cycle is present" << endl : cout << "Cycle is not present" << endl;
    return 0;
}