void insertAtHead(listnode*& head, int val){
    listnode* n = new listnode(val);
    n->next = head;
    head = n;
}