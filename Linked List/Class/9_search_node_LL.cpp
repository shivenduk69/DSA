//we are going to search for a node in the LL
//we have two methods again to do this I) BY iteration II) By recursion
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

bool searchByIteration(listnode* head, int target){

    while(head->next != NULL){
        if(head->val == target){
            return true;
        }
        head = head->next;
    }
    return false;
}
bool searchByRecursion(listnode* head, int target){
    if(head->next == NULL) return false;
    if(head->val == target) return true;

    return searchByRecursion(head->next, target);;
}
int main(){
    listnode* head = NULL;
    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);

    int target = 100;
    //By iteration
    cout << searchByIteration(head, target) << endl;
    //By recursion
    cout << searchByRecursion(head, target) << endl;
    return 0;
}

