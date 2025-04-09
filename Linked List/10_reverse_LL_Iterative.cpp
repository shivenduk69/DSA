//In this program we are going to reverse a LL 
// Again there are two ways to do this job I)By iterative II) By recursion

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

listnode* reverseLinkedListIterativeApproach(listnode* head){
    
    listnode* curr = head;
    listnode* prev = NULL;

    while(curr != NULL){
        //reverse the LL
        listnode* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;

}
int main(){
    listnode* head = NULL;
    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);

    //Iterative Approach
    head = reverseLinkedListIterativeApproach(head);
    printLinkedList(head);

    return 0;
}

