#include<iostream>
using namespace std;
class listnode{
    public:
    int val;
    listnode* next;

    listnode(int val){
        this->val = val;
        this ->next = NULL;
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
        head = head -> next;
    }
    cout << endl;
}

void deleteAtHead(listnode*& head){
    if(head==NULL){
        //LL is empty
        return;
    }
    listnode* temp = head;
    head = head->next;

    //free the memory by delete keyword
    delete temp;
}
int main(){
    listnode* head = NULL;
    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);

    deleteAtHead(head);
    printLinkedList(head);
    return 0;
}

