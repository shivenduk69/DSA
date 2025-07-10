#include<iostream>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
};
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL) return NULL;
        if(root == p || root == q){
            return root;
        }
        //search in left and right subtrees
        TreeNode* leftans = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightans = lowestCommonAncestor(root->right, p, q);
        //if root is LCA then iske left aur right dono main ek jagah p and ek jagah q hai
        if(leftans != NULL and rightans != NULL){
            return root;
        }
        if(leftans != NULL) return leftans; 
        return rightans;
    }
};