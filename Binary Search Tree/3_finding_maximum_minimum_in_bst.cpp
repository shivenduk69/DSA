class Solution {
  public:
    int minValue(Node* root) {
        // Code here
        if(root->left == NULL) return root->data;
        
        int ans = minValue(root->left);
        
        return ans;
        
    }
};