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

class triple{
    public:
    bool bst;
    int minVal;
    int maxVal;
};

triple isBST(TreeNode* root){
    triple t;
    if(root == NULL){
        t.bst = true;
        t.minVal = INT_MAX;
        t.maxVal = INT_MIN;
        return t;
    }
    triple left = isBST(root->left);
    triple right = isBST(root->right);

    bool isRootBST = root->val < right.minVal and root->val > left.maxVal ? true:false;

    t.minVal = min(min(left.minVal, right.minVal), root->val);
    t.maxVal = max(max(left.maxVal, right.maxVal), root->val);
    t.bst = left.bst and right.bst and isRootBST;
    return t;
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
    isBST(root).bst? cout << "true" : cout << "false";
    return 0;
}