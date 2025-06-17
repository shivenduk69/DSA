//in this program we will create a singly linked list by using structure

#include<iostream>
using namespace std;
struct listNode{
    int val;
    listNode* next;
    listNode(int val): val(val), next(nullptr){}
    listNode(int val, listNode* next){
        this->val = val;
        this->next = nullptr;
    }
    listNode(){
        this->val = 0;
        this->next = nullptr;
    }
};
void insertAtHead(listNode*& head, int val){
    listNode* node = new listNode(val);
    node->next = head;
    head = node;
}
void printList(listNode* head){
    while(head != NULL){
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
int main(){
    listNode* head = new listNode(10);

    insertAtHead(head, 20);

    printList(head);
    return 0;
}