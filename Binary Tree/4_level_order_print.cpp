//in this program we are going to print the binary tree level by level

#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int data){
        this->val = data;
    }
};
Node* binaryTree(){
    int d;
    cin >> d;
    if(d==-1) return nullptr;
    Node* root = new Node(d);
    root->left = binaryTree();
    root->right = binaryTree();
    return root;
}
void printKthLevel(Node* root, int height){
    if(root==NULL) return;
    if(height == 1){
        cout << root->val << " ";
        return;
    }

    printKthLevel(root->left, height-1);
    printKthLevel(root->right, height-1);

}
int HeightOfBt(Node* root){
    if(root == NULL) return 0;
    int a = HeightOfBt(root->left);
    int b = HeightOfBt(root->right);
    return 1+max(a, b);
}
int main(){
    Node* root = binaryTree();

    int height = HeightOfBt(root);
    for(int i = 1; i<=height; i++){
        printKthLevel(root, i);
        cout << endl;
    }
    
    return 0;
}