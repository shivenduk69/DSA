//in this program we are going to find the diameter of a binary tree
// m-1

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int x)
    {
        this->val = x;
    }
};
Node *buildTree()
{
    int d;
    cin >> d;
    if (d == -1)
        return NULL;
    Node *root = new Node(d);
    root->left = buildTree();
    root->right = buildTree();
}
class Solution
{
public:

    int heightOfBT(Node *root)
    {
        if (!root)
            return 0;
        return 1 + max(heightOfBT(root->left), heightOfBT(root->right));
    }
    int diameterOfBinaryTree(Node *root)
    {
        if (!root)
            return 0;
        int h1 = heightOfBT(root->left);
        int h2 = heightOfBT(root->right);
        int d1 = diameterOfBinaryTree(root->left);
        int d2 = diameterOfBinaryTree(root->right);
        
        return max({h1+h2, d1, d2});
    }
};

int main(){
    Node* root = buildTree();

    Solution A;
    cout << A.diameterOfBinaryTree(root) << endl;

    return 0;
}