//in this program we are going to find all the nodes of a binary tree present at a distance k from a target node
//from leetcode
#include<iostream>
#include<vector>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
};
class Solution {
public:
    void getTreeNodeAtLevelK(TreeNode* root, int k, vector<int> &ans){
        if(root == NULL) return;

        if(k==0){
            ans.push_back(root->val);
            return;
        }
        getTreeNodeAtLevelK(root->left, k-1, ans);
        getTreeNodeAtLevelK(root->right, k-1, ans);
        return;
    }
    int getTreeNodeAtDistanceK(TreeNode* root, TreeNode* target, int k, vector<int> &ans){

        //base case
        if(root==NULL) return -1;

        //reach the target TreeNode
        if(root == target){
            getTreeNodeAtLevelK(root, k, ans);
            return 0;
        }
        //next step - Ancestor
        //distance of the target node in the left subtree(DL)
        int DL = getTreeNodeAtDistanceK(root->left, target, k, ans);

        if(DL != -1){
            //Again there are two cases
            //Ancestor itself or you need to go to the right ancestor

            if(DL + 1 == k){
                ans.push_back(root->val);
            }else{
                getTreeNodeAtLevelK(root->right, k-2-DL, ans);
            }
            return 1+DL;
        }
        //if not present
        return -1;
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        
        vector<int> ans;
        getTreeNodeAtDistanceK(root, target, k, ans);
        return ans;
    }
};

int main(){

    return 0;
}



/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
// class Solution {
// public:
//     void parentChild(TreeNode* root, TreeNode* par, unordered_map<TreeNode*, TreeNode*> &parent){
//         if(root == NULL) return;
//         parent[root] = par;
//         par = root;
//         parentChild(root->left, par, parent);
//         parentChild(root->right, par, parent);
//     }
//     vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
//         unordered_map<TreeNode*, TreeNode*> parent;
//         parentChild(root, NULL, parent);

//         queue<TreeNode*> q;
//         q.push(target);

//         unordered_map<TreeNode*, bool> visited;
//         visited[target] = true;
//         while(k--){
//             queue<TreeNode*> p;
//             while(!q.empty()){
//                 TreeNode* f = q.front();
//                 q.pop();
//                 if(f->left != NULL and visited[f->left] != true){
//                     p.push(f->left);
//                     visited[f->left] = true;
//                 } 
                
//                 if(f->right != NULL and visited[f->right] != true){
//                     p.push(f->right);
//                     visited[f->right] = true;
//                 } 
//                 if(parent[f] != NULL and visited[parent[f]] != true){
//                     p.push(parent[f]);
//                     visited[parent[f]] = true;
//                 }
//             }
//             q.swap(p);
//         }
//         vector<int> ans;
//         while(!q.empty()){
//             if(q.front() != NULL){
//                 ans.push_back(q.front()->val);
//             }
            
//             q.pop();
//         }
//         return ans;
//     }
// };