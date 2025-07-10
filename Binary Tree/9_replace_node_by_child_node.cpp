//in this program we are going to write a code for changing the node with sum of their child node except for the leaf node

#include <iostream>
#include<queue>
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
int replaceNode(Node* root){
    if(root==NULL) return 0;
    if(root->left==NULL and root->right==NULL){
        return root->val;
    }
    int left_sum = replaceNode(root->left);
    int right_sum = replaceNode(root->right);
    int temp = root->val;
    root->val = left_sum+right_sum;
    return temp+root->val;
}
void bfs(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *f = q.front();
        if (f == NULL)
        {
            q.pop();
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << f->val << " ";
            q.pop();

            if (f->left)
                q.push(f->left);
            if (f->right)
                q.push(f->right);
        }
    }
    return;
}
int main()
{
    Node *root = buildTree();

    replaceNode(root);
    bfs(root);
    return 0;
}