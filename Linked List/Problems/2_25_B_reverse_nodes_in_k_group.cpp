//In this program we are going to write brute force approach for reverse nodes in k groups

#include<iostream>
#include<vector>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(int val){
        this->val = val;
        this->next = NULL;
    }
};



void insertAtTail(int val, ListNode*& tail, ListNode*& head){
    if(tail ==  NULL){
        ListNode* n = new ListNode(val);
        tail = n;
        head = n;
        return;
    }
    ListNode* n = new ListNode(val);
    tail->next = n;
    tail = n;
}

void printLL(ListNode* head){
    while(head != NULL){
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main(){
    ListNode* head = NULL;
    ListNode* tail = NULL;
    int n;//n is length of LL
    cout << "Enter length of LL : ";
    cin >> n;

    for(int i = 0; i<n; i++){
        int val;
        cin >> val;
        insertAtTail(val, tail, head);
    }

    printLL(head);
    return 0;
}

