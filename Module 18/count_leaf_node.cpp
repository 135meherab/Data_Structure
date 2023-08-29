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
int count_leaf_node(Node * root)
{
    if(root == NULL) return 0;
    else if(root->left == NULL && root->right ==NULL) return 1;
    else
    {
        int cnt_l = count_leaf_node(root->left);
        int cnt_r = count_leaf_node(root->right);
        return cnt_l + cnt_r;
    }
}
int main()
{
    Node * rt = input_tree();
    int result = count_leaf_node(rt);
    cout<<result;
    return 0;
}