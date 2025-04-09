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

void insertAtHead(listnode*& head, int val){
    listnode* n = new listnode(val);
    n->next = head;
    head = n;
}

void deleteAtTail(listnode*& head){
    //corner case-I -> when LL is empty
    if(head==NULL) return;
    //corner case-II -> when LL has only one node
    if(head->next == NULL){
        delete head;
        head = NULL;
        return;
    }
    listnode* prev = NULL;
    listnode* tail = head;
    while(tail->next != NULL){
        prev = tail;
        tail = tail->next;
    }
    prev->next = NULL;
    delete tail;
}
void printLinkedList(listnode* head){
    while(head != NULL){
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
int main(){
    listnode* head = NULL;

    insertAtHead(head, 50);
    // insertAtHead(head, 40);
    // insertAtHead(head, 30);
    // insertAtHead(head, 20);
    // insertAtHead(head, 10);

    deleteAtTail(head);
    if(head != NULL){
        printLinkedList(head);
    }
    
    return 0;
}