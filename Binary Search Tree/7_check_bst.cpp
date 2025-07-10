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
// TreeNode* insert(TreeNode* root, int k){
//     if(root == NULL) return new TreeNode(k);

//     if(k > root->val){
//         root->right = insert(root->right, k);
//     }else{
//         root->left = insert(root->left, k);
//     }
//     return root;
// }

int findMinimum(TreeNode* root){
    
    if(root == NULL){
        return INT_MAX;
    }

    TreeNode* temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp->val;
    
}
int findMaximum(TreeNode* root){
    if(root == NULL){
        return INT_MIN;
    }

    TreeNode* temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp->val;
}
bool isBST(TreeNode* root){
    
    if(root == NULL) return true;

    // 1. recursively, check if LST is bst or not
    bool left = isBST(root->left);

    // 2. recursively, check if RST is bst or not
    bool right = isBST(root->right);

    // 3. Check if root satisfies bst properties or not
    bool isRootBST = root->val > findMaximum(root->left) and root->val < findMinimum(root->right) ? true:false;

    return left && right && isRootBST;
}

int main(){
    // TreeNode* root = NULL;
    // 1. Check for BST
    // root = insert(root, 10);
    // root = insert(root, 5);
    // root = insert(root, 3);
    // root = insert(root, 7);
    // root = insert(root, 15);
    // root = insert(root, 13);
    // root = insert(root, 17);

    // 2. Normal BT check
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    isBST(root)? cout << "true" : cout << "false";
    return 0;
}