#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node * left;
        Node * right;
        Node(int val)
        {
            this->val = val;
            left = NULL;
            right = NULL;
        }
};
Node * input_tree()
{
    int val;
    cin>>val;
    Node * root;
    if(val == -1) root = NULL;
    else root = new Node(val);
    queue <Node *> q;
    if(root != NULL) q.push(root);
    while (!q.empty())
    {
        Node * f = q.front();
        q.pop();

        int l,r;
        cin>> l >> r;

        Node * left, * right;
        if(l == -1) left = NULL;
        else left = new Node(l);
        if(r == -1) right = NULL;
        else right = new Node(r);

        f->left = left;
        f->right =right;

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right); 
    }
    return root;
}
vector <int> v;
void leaf_node(Node * root)
{
    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL)
    {
        v.push_back(root->val);
        return;    
    }
    leaf_node(root->left);
    leaf_node(root->right);
    
}
int main()
{
    Node * root = input_tree();
    
    leaf_node(root);
    int size = v.size();
    int mx = INT_MIN,mn = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if(v[i] >= mx) mx = v[i];
    }
    for (int i = 0; i < size; i++)
    {
        if(v[i] <= mn) mn = v[i];
    }
    cout<<mx<<" "<<mn;
    return 0;
}