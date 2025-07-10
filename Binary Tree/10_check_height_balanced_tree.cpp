// in this program we are going to write a function to check if the tree is height balanced or not


#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int x)
    {
        this->val = x;
    }
};
Node *buildTree()
{
    int d;
    cin >> d;
    if (d == -1)
        return NULL;
    Node *root = new Node(d);
    root->left = buildTree();
    root->right = buildTree();
}
//we are defining a class called height balanced class which will keep height and is it balanced or not

class HBPair{
    public:
    int height;
    bool balance;
};

HBPair isHeightBalanced(Node* root){
    HBPair p;
    if(root == NULL){
        p.height = 0;
        p.balance = true;//a null tree is always balanced
        return p;
    }
    //Recursive case
    
    HBPair left = isHeightBalanced(root->left);
    HBPair right = isHeightBalanced(root->right);

    p.height = max(left.height, right.height)+1;

    if(abs(left.height-right.height)<=1 && left.balance && right.balance){
        p.balance = true;
    }else{
        p.balance = false;
    }
    return p;
}
int main()
{
    Node *root = buildTree();

    cout << isHeightBalanced(root).balance << endl;
    return 0;
}