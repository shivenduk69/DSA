//creation and accessing a linkedlist
#include<iostream>
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
int main(){
    ListNode* node = new ListNode(10);
    //Accesing linkedlist method 1
    cout << (*node).val << endl;
    //Method-2 preffered
    cout << node->val << endl; 
    return 0;
}