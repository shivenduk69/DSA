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
int lengthOfLL(listnode* head){
    int len = 0;
    while(head != NULL){
        len++;
        head = head->next;
    }
    return len;
}
void swapLinkedList(listnode*& head){
    int n = lengthOfLL(head);
    listnode* prev = head;
    listnode* curr = head->next;
    listnode* temp1 = NULL;
    listnode* temp2 = NULL;
    head = head->next;
    int i = 1;
    while(i<=n/2){
        temp1 = prev;
        temp2 = curr->next;
        curr->next = temp1;
        if(temp2->next != NULL){
            prev->next = temp2->next;
            prev = temp2;
            curr = prev->next;
        }
    }
}
int main(){
    listnode* head = NULL;
    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);

    swapLinkedList(head);
    printLinkedList(head);
    return 0;
}

