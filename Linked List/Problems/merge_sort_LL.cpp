#include<iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insertAtHead(ListNode*& head, int val) {
    ListNode* n = new ListNode(val);
    n->next = head;
    head = n;
}

void printLinkedList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

ListNode* mergeList(ListNode* head1, ListNode* head2) {
    if (head1 == NULL || head2 == NULL) {
        return head1 == NULL ? head2 : head1;
    }
    if (head1->val <= head2->val) {
        head1->next = mergeList(head1->next, head2);
        return head1;
    } else {
        head2->next = mergeList(head1, head2->next);
        return head2;
    }
}

ListNode* findMiddle(ListNode* head) {
    if (head == NULL) return head;
    ListNode* slow = head;
    ListNode* fast = head->next;
    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

ListNode* mergeSort(ListNode*& head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    ListNode* mid = findMiddle(head);

    ListNode* leftHead = head;
    ListNode* rightHead = mid->next;
    mid->next = NULL;

    // Sort the left and right halves
    leftHead = mergeSort(leftHead);
    rightHead = mergeSort(rightHead);

    // Merge the sorted halves
    return mergeList(leftHead, rightHead);
}

int main() {
    ListNode* head = NULL;
    insertAtHead(head, 30);
    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 10);
    insertAtHead(head, 20);

    head = mergeSort(head);
    printLinkedList(head);
    return 0;
}