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
int level;
void leaf_node(Node * root)
{
    queue <pair<Node * , int>> q;
    q.push({root,0});
    while (!q.empty())
    {
        pair<Node * , int> f = q.front();
        Node *  n = f.first;
        level = f.second;
        q.pop();

        if(n->left) q.push({n->left,level + 1});
        if(n->right) q.push({n->right,level + 1});
    }
    

}
int get_height(Node * root)
{
    if(root == NULL) return 0;
    int l = get_height(root->left);
    int r = get_height(root->right);
    return l+r+1;
}
int main()
{   
    Node * root = input_tree();
    leaf_node(root);
    int total_node = 2;
    for (int i = 0; i < level; i++)
    {
        total_node = total_node * 2;
    }
    total_node = total_node-1;
    int height = get_height(root);
    (height == total_node) ? cout<<"YES": cout<<"NO";
    return 0;
}