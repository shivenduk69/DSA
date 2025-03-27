//insert 60 at the tail of the LL such that output becomes 10->20->30->40->50->60
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
}


void insertAtTail(listnode*& head, int val){
    listnode* n = new listnode(val);
    
    n->next = head;
    head = n;
}
void printList(listnode* head){
    cout << head->val << " ";
    head = head->next;
}
int main(){
    listnode* head = NULL;
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);
    insertAtTail(head, 50);
    return 0;
}