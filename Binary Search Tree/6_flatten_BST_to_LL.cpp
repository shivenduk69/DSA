// User function Template for C++

/* Node of the binary search tree
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/
class Pair{
    public:
    Node* head;
    Node* tail;
};

class Solution {
  public:
    Pair  convert(Node* root){
        Pair p;
        if(root == NULL){
            p.head = NULL;
            p.tail = NULL;
            return p;
        }
        
        
        Pair left = convert(root->left);
        
        if(left.head == NULL){
            p.head = root;
        }else{
            left.tail->right = root;
            p.head = left.head;
        }
        
        Pair right = convert(root->right);
        
        if(right.head==NULL){
            p.tail = root;
        }else{
            root->right = right.head;
            p.tail = right.tail;
        }
        root->left = NULL;
        return p;
    }
    Node *flattenBST(Node *root) {
        Pair p = convert(root);
        return p.head;
    }
};