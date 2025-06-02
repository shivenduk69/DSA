//in this program we will implement binary tree by postorder built

#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node* binaryTree(){
    int d;
    cin >> d;
    if(d == -1){
        return NULL;
    }
    node* root = new node(d);
    root->left = binaryTree();
    root->right = binaryTree();
    return root;
}
void print(node* root){
    if(root == NULL) return;

    print(root->left);
    print(root->right);
    cout << root->data << " ";
}
int main(){
    node* root = binaryTree();

    print(root);
    return 0;
}