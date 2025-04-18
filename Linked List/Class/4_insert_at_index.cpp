//Insert at index
//at index 2 of list place 25

#include<iostream>
using namespace std;
class Listnode{
    public:
    int val;
    Listnode* next;

    Listnode(int val){
        this->val = val;
        this->next = NULL;
    }
};
Listnode* getNode(int idx, Listnode* head){
    int i = 1;
    while(i<=idx and head != NULL){
        head = head->next;
        i++;
    }
    return head;

}
void insertAtHead(Listnode*& head, int val){
    Listnode* n = new Listnode(val);
    n->next = head;
    head = n;
}
void printLinkedList(Listnode* head){
    while(head != NULL){
        cout << head->val << " ";
        head = head->next;
    }
}

void insertAtIndex(int idx, int val, Listnode*& head){
    if(idx==0){
        insertAtHead(head, val);
        return;
    }
    Listnode* n =new Listnode(val);
    Listnode* prev = getNode(idx-1, head);
    if(prev==NULL){
        //i is invalid
        return;
    }
    n->next = prev->next;
    prev->next = n;
}
int main(){
    Listnode* head = NULL;

    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);

    insertAtIndex(0, 25, head);
    printLinkedList(head);
    return 0;
}