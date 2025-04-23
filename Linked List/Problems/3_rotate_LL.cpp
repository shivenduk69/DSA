//In this program we are going to write code for rotating a LL by k steps

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

ListNode* rotateLL(ListNode* head, int k){
    //Steps to rotate
    //1. Make circular LL
    //2.find newhead

    if(head==NULL || head->next == NULL || k==0) return head;
    int len = 1;
    ListNode* tail = head;
    while(tail->next){
        tail = tail->next;
        len++;
    }
    k = k % len;
    //Make circular LL
    tail->next = head;
    //find new Tailnode and new head
    int stepsToRotate = len-k-1;
    ListNode* newTail = head;

    while(stepsToRotate--){
        newTail = newTail->next;
    }

    ListNode* newHead = newTail->next;
    newTail->next = NULL;

    return newHead;

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
    int k; cout << "Enter no of rotation : ";
    cin >> k;
    head = rotateLL(head, k);
    printLL(head);
    return 0;
}

