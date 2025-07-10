// in this program we will check if a binary tree is a bst or not

#include<iostream>
#include<climits>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x): val(x), left(nullptr), right(nullptr){}
    TreeNode(): val(0), left(nullptr), right(nullptr){}
};
// 1. For bst
TreeNode* insert(TreeNode* root, int k){
    if(root == NULL) return new TreeNode(k);

    if(k > root->val){
        root->right = insert(root->right, k);
    }else{
        root->left = insert(root->left, k);
    }
    return root;
}

bool isBST(TreeNode* root, long long lb, long long ub){
    
    if(root == NULL) return true;

    return (root->val >lb and root->val < ub) &&
           isBST(root->left, lb, root->val) &&
           isBST(root->right, root->val, ub); 
}

int main(){
    TreeNode* root = NULL;
    // 1. Check for BST
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 15);
    root = insert(root, 13);
    root = insert(root, 17);

    // 2. Normal BT check
    // TreeNode* root = new TreeNode(1);
    // root->left = new TreeNode(2);
    // root->right = new TreeNode(3);
    long long lb = (long long) INT_MIN-1;
    long long ub = (long long) INT_MAX-1;
    isBST(root, lb, ub) ? cout << "true" : cout << "false";
    return 0;
}