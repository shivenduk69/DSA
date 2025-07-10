class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL) return NULL;
        if(root->val == val) return root;
        TreeNode* ans;
        if(val < root->val){
            ans = searchBST(root->left, val);
        }else{
            ans = searchBST(root->right, val);
        }
        return ans;
    }
};
