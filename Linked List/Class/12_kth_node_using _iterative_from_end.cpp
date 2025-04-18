//in this program we will find the kth node from the end of the LL
// There are two optimised solution of the problem I)Iterative method II)Two pointer Approach(Slow and fast)
//In this program we will see iterative method which is O(2n) in T.C
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
listnode* kthFromEnd(listnode* head, int k){
    int n = lengthOfLL(head);
    int i = 0;
    while(i != n-k){
        head = head->next;
        i++;
    }
    return head;
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

