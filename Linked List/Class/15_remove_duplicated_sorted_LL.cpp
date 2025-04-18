// remove duplicates from sorted linkedList

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
void printLinkedList(listnode* head){
    while(head != NULL){
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
void removeDuplicate(listnode* head){
    if(head == NULL) return;
    listnode* prev = head;
    listnode* curr = head->next;

    while(curr != NULL){
        
        if(prev->val != curr->val){

            prev->next = curr;
            prev = curr;
            
        }
        
        curr = curr->next;
    }
    //corner case-> if last element is repeated then use prev->next = NULL;
    prev->next = NULL;
    return;
}
int main(){
    listnode* head = NULL;
    
    
    insertAtHead(head, 50);
    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);
    insertAtHead(head, 10);

    printLinkedList(head);
    removeDuplicate(head);
    printLinkedList(head);
    return 0;
}