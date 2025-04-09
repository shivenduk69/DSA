#include<iostream>
using namespace std;
class Listnode{
    public:
    int val;
    Listnode* next;

    Listnode(int val){
        this-> val = val;
        this-> next = NULL;
    }
};
void insertAtHead(Listnode*& head, int val){
    Listnode* n = new Listnode(val);
    n->next = head;
    head = n;
}
Listnode* getTail(Listnode* head){
    while(head->next != NULL){
        head = head->next;
    }
    return head;
}
void insertAtTail(Listnode*& head, int val){
    Listnode* n = new Listnode(60);
    Listnode* tail = getTail(head);
    
    tail->next = n;
}
void printLinkedList(Listnode*& head){
    while(head != NULL){
        cout << head->val << " ";
        head = head->next;  
    }
    
}
int main(){
    Listnode* head = NULL;

    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);

    insertAtTail(head, 60);
    printLinkedList(head);

    return 0;
}