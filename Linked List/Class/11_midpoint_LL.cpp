//in this problem we are going to find midpoint of a LL

//1st App-> find length n of linkedList and then iterate over n/2 times to find mid point

//2nd Way->it is know as Slow and Fast pointer or Tortoise and hair algorithm and here we will uuse this method

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
listnode* computeMidPoint(listnode* head){
    //To initialise slow and fast pointer, it depends on question
    //if in case of even size LL, user want output of mid 30 then fast should be initialised with point next to head(i.e fast = head->next)

    //edge case -> if head==NULL
    if(head == NULL){
        return NULL;
    }
    listnode* slow = head;
    listnode* fast = head->next;

    //if in case of even size LL, user want output of mid 40 then fast should be initialised with head(i.e fast = head)
    // lisnode* slow = head;
    // listnode* fast = head;

    //slow will always initialised with head(i.e slow = head)

    while(fast != NULL and fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
int main(){
    listnode* head = NULL;

    // insertAtHead(head, 60);
    // insertAtHead(head, 50);
    // insertAtHead(head, 40);
    // insertAtHead(head, 30);
    // insertAtHead(head, 20);
    // insertAtHead(head, 10);

    //finding midpoint by tortoise and hair Algorithm
    listnode* midValue = computeMidPoint(head);

    //edge case-> if LL is empty
    if(midValue != NULL){
        printLinkedList(head);
        cout << "Mid value is " << midValue->val << endl;
    }else{
        cout << "LL is empty" << endl;
    }

    
    return 0;
}

