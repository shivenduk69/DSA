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
void insertAtHead(Listnode*& head, int val){
    Listnode* n = new Listnode(val);
    n->next = head;
    head = n;
}
void printLinkedList(Listnode* head){
    
    while(head!=NULL){
        cout << head->val << endl;
        head = head->next;
    }
    
}
int main(){
    Listnode* head = NULL;

    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);

    printLinkedList(head);
    return 0;
}