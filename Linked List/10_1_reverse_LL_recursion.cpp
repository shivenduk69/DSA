//Recursive Approach of reversing a LL

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

listnode* reverseLLByRecursion(listnode*& head){
    //Base case
    if(head == NULL || head->next == NULL) return head;
    //Recursive case
    listnode* revHead = reverseLLByRecursion(head->next);
    head->next->next = head;
    head->next = NULL;
    return revHead;
}
int main(){
    listnode* head = NULL;
    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);

    head = reverseLLByRecursion(head);
    printLinkedList(head);
    return 0;
}

