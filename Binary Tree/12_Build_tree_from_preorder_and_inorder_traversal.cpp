//in this program we are going to build a binary tree by pre and in traversal

// in this program we will add the feature of new line character to the bfs level print

#include <iostream>
#include <queue>
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
Node* build(vector<int>& pre, vector<int>& in, int s, int e){
    static int i = 0;
    if(s>e) return NULL; 
    Node* root = new Node(pre[i]);
    int a = -1;
    for(int j = s; j<=e; j++){
        if(pre[i]==in[j]){
            a = j;
            break;
        }
    }
    i++;
    
    root->left = build(pre, in, s, a-1);
    root->right = build(pre, in, a+1, e);
    return root;
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
    vector<int> in = {3,2,8,4,1,6,7,5};
    vector<int> pre = {1, 2, 3, 4, 8, 5, 6, 7};
    int n = in.size();
    Node *root = build(pre, in, 0, n-1);

    bfs(root);
    return 0;
}