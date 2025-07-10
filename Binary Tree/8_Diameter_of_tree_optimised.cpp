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
class Pair{
    public:
        int height;
        int diameter;
};
Pair fastDiameter(Node* root){
    Pair p;
    if(root == NULL){
        p.diameter = p.height = 0;
        return p;
    }
    //otherwise
    Pair left = fastDiameter(root->left);
    Pair right = fastDiameter(root->right);

    p.height = max(left.height, right.height)+1;
    p.diameter = max(left.height+right.height, max(left.diameter, right.diameter));
    return p;
}
int main(){
    Node* root = buildTree();
    Pair p = fastDiameter(root);
    cout << p.height << endl;
    cout << p.diameter << endl;

    return 0;
}