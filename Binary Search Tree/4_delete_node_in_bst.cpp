/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* find_left_maximum(TreeNode* root){
        if(root->right == NULL) return root;

        TreeNode* ans = find_left_maximum(root->right);

        return ans;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL) return NULL;

        if(key < root->val){
            root->left = deleteNode(root->left, key);
        }else if(key > root->val){
            root->right = deleteNode(root->right, key);
        }else{//key == root->val
            //case-1: root is leaf node
            if(root->left == NULL && root->right == NULL){
                delete root;
                root = NULL;
            }else if(root->left != NULL && root->right == NULL){
                TreeNode* temp = root->left;
                delete root;
                root = temp;
            }else if(root->left == NULL && root->right != NULL){
                TreeNode* temp = root->right;
                delete root;
                root = temp;
            }else{
                //In this case we can either swap node with minimum of right sub tree or maximum of left sub tree
                //1. LST
                TreeNode* left_maximum = find_left_maximum(root->left);
                swap(left_maximum->val, root->val);
                root->left = deleteNode(root->left, left_maximum->val);
                //2. RST
                // TreeNode* right_maximum = find_left_maximum(root->right, key);
                // swap(right_maximum->val, root->val);
                // root->left = deleteNode(right_maximu, key); 
            }
        }
        return root;
        
    }
};