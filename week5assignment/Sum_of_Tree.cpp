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
    queue <Node * > q;
    if(root != NULL) q.push(root);
    while (!q.empty())
    {
        Node * f = q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node * left, * right;
        if(l == -1) left = NULL;
        else left = new Node(l);
        if(r == -1) right = NULL;
        else right = new Node(r);

        f->left = left;
        f->right = right;

        if(f->left != NULL) q.push(f->left);
        if(f->right != NULL) q.push(f->right);
    }
    
    return root;
}
int sum = 0;
int sum_of_tree(Node * root)
{
    if(root == NULL) return 0;
    int l = sum_of_tree(root->left);
    int r = sum_of_tree(root->right);
    sum = l + r + root->val;
    return sum;
}
int main()
{
    Node * root = input_tree();
    int r = sum_of_tree(root);
    cout<<r;
    return 0;
}