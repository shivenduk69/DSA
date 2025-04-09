
//There are two ways to find length of a LL I) By Iteration II)By recursion

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

int printLengthOfLinkedListByIteration(listnode* head){
    int length = 0;
    while(head != NULL){
        head = head->next;
        length++;
    }
    return length;
}

int printLengthOfLinkedListByRecursion(listnode* head){
    //Base case
    if(head == NULL){
        return 0;//size of LL 0 when head==NULL
    }

    //Recursive case
    int len = printLengthOfLinkedListByRecursion(head->next);
    return 1+len;
}

int main(){
    listnode* head = NULL;
    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);
    //by iteration
    cout << printLengthOfLinkedListByIteration(head) << endl;

    //by recursion
    cout << printLengthOfLinkedListByRecursion(head) << endl;
    return 0;
}

