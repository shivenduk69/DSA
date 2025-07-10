//in this program we will traverse a binary tree and print it level by level in O(N) by Breadth First Traversal

#include<iostream>
#include<queue>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int x){
        this->val = x;
    }
};
Node* buildTree(){
    int d; cin >> d;
    if(d==-1) return NULL;
    Node* root = new Node(d);
    root->left = buildTree();
    root->right = buildTree();
}
void bfs(Node* root){
    queue<Node*> q;

    q.push(root);
    while(!q.empty()){
        Node* f = q.front();
        cout << f->val << " ";
        q.pop();
        
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    return;

}
int main(){
    Node* root = buildTree();

    bfs(root);
    return 0;
}