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
void print_level(Node * root)
{
    queue <Node * > q;
    q.push(root);
    while (!q.empty())
    {
        Node * f = q.front();
        q.pop();

        cout<<f->val<<" ";

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
     
}
bool search_in_bst(Node * root, int x)
{
    if(root == NULL) return false;
    if(root->val == x) return true;
    if(x < root->val)
    {
        return search_in_bst(root->left,x);
    }
    if(x > root->val)
    {
        return search_in_bst(root->right,x);
    }
}
int main()
{   
    Node * root = input_tree();
    if(search_in_bst(root, 100)) cout<<"Found"<<endl;
    else cout<<"Not found";
    return 0;
}
