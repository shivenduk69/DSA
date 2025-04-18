//Remove cycle from a linkedlist
// Floyd's Cycle Detection Algorithm
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

void removeCycle(listnode* head){
    //Floyd's Cycle Detection Algorithm

    listnode* slow = head;
    listnode* fast = head;

    while(true){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            break;
        }

    }

    //now meeting point has reached
    //ab hm fast and slow dono ko ek ek step badhayenge
    // And ye guaranteed hai ki ab slow and fast cycle ke start pe milega
    slow = head;
    while(slow != fast){
        if(slow->next == fast->next){
            fast->next = NULL;
            return;
        }
        slow = slow->next;
        fast = fast->next;
    }
}
void printLinkedList(listnode* head){
    while(head != NULL){
        cout << head->val << " ";
        cout << endl; 
        head = head->next;
    }
}
int main(){
    listnode* head = new listnode(10);
    head->next = new listnode(20);
    head->next->next = new listnode(30);
    head->next->next->next = new listnode(40);
    head->next->next->next->next = new listnode(50);
    head->next->next->next->next->next = head->next->next;

    //before removing cycle the if we will print the LL then it will print in an infinite loop
    removeCycle(head);
    //Now it will print the LL
    printLinkedList(head);
    return 0;
}