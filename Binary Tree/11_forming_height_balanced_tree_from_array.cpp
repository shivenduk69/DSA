// in this program we will form a height balancced tree from an array

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

Node* buildHeightBalancedTree(vector<int> &vec, int s, int e){
    if(s>e) return NULL;
    int mid = s+(e-s)/2;

    Node* root = new Node(vec[mid]);
    root->left = buildHeightBalancedTree(vec, s, mid-1);
    root->right = buildHeightBalancedTree(vec, mid+1, e);

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
    int n; cin >> n;
    vector<int> vec(n);
    for(int i = 0; i<n; i++){
        cin >> vec[i];
    }

    Node *root = buildHeightBalancedTree(vec, 0, n-1);

    bfs(root);

    return 0;
}