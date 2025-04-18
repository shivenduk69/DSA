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

listnode* getNode(listnode* head, int idx){
    int i = 1;
    while(head != NULL and i <= idx){
        head = head->next;
        i++;
    }
    return head;    
}
void deleteAtIndex(listnode*& head, int idx){
    //corner case-II -> if idx == 0
    if(idx==0){
        listnode* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    listnode* prev = getNode(head, idx-1);
    //corner case-I -> if index to delete is greater than length of LL
    if(prev == NULL){
        //idx is greater then length of LL
        return;
    }
    listnode* currentNode = prev->next;
    prev->next = currentNode->next;
    delete currentNode;
    
}
int main(){
    listnode* head = NULL;
    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);

    deleteAtIndex(head, 0);
    printLinkedList(head);
    return 0;
}

