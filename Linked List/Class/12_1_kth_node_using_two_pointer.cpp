//In this program we are going to find kth index from end of LL using two pointer Approach

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
listnode* kthFromEnd(listnode* head, int k){
    //using two pointer
    listnode* slow = head;
    listnode* fast = head;
    int i = 1;
    while(i<=k){
        fast = fast->next;
        i++;
    }

    while(fast != NULL){
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}
int main(){
    listnode* head = NULL;
    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);

    cout << kthFromEnd(head, 2)->val << endl;
    printLinkedList(head);
    return 0;
}