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
int level;
void print_level(Node * root, int x)
{
    queue <pair<Node * , int>> q;
    q.push({root,0});
    while (!q.empty())
    {
        pair<Node *,int> f = q.front();
        Node * n = f.first;
        level = f.second;
        q.pop();

        if (level == x) v.push_back(n->val);
        
        if(n->left) q.push({n->left,level + 1});
        if(n->right) q.push({n->right,level + 1});
    }
}
int main()
{   
    Node * root = input_tree();
    int n;
    cin>>n;
    print_level(root,n);
    if(level >= n)
    {
        for (int val:v)
        {
            cout<<val<<" ";
        }
        
    }
    else
    {
        cout<<"Invalid";
    }
    return 0;
}