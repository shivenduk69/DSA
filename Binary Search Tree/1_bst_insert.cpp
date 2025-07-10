//in this program we are going to perform insertion in a BST

#include<iostream>
#include<queue>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x){
        this->val = x;
        this->left = nullptr;
        this->right = nullptr;
    }
};
void bfs(TreeNode* root){
    queue<TreeNode*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        TreeNode* f = q.front();
        if(f == NULL){
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
            cout << endl;
        }else{
            cout << f->val << " ";
            q.pop();
            if(f->left) q.push(f->left);
            if(f->right) q.push(f->right);
        }
    }
}
void inOrderPrint(TreeNode* root){
    if(root == NULL) return;

    inOrderPrint(root->left);
    cout << root->val << " ";
    inOrderPrint(root->right);
}
TreeNode* insert(TreeNode* root, int val){
    if(root==NULL){
        //now we have to insert
        return new TreeNode(val);
    }
    
    if(val < root->val){
        //value will be putted in left sub tree
        root->left = insert(root->left, val);
    }else{
        //val > root->val as no duplicate in bst, putted in right sub tree
        root->right = insert(root->right, val);
    }
    return root;
}
int main(){

    TreeNode* root = NULL;
    root = insert(root, 10);

    root = insert(root, 5);
    root = insert(root, 3);
    root = insert(root, 7);

    root = insert(root, 15);
    root = insert(root, 13);
    root = insert(root, 17);

    bfs(root);

    inOrderPrint(root);
    return 0;
}