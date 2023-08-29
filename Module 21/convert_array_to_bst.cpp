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
Node * convert(int a[],int n, int l, int r)
{
    if(l > r) return NULL;
    int mid = (l + r) / 2;
    Node  * root = new Node(a[mid]);
    Node * left_root = convert(a,n,l,mid - 1);
    Node * right_root = convert(a,n,mid + 1,r);
    root->left = left_root;
    root->right = right_root;
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
int main()
{   
    int n;
    cin>>n;
    int arr[n];
    int v;
    for (int i = 0; i < n; i++) cin>>arr[i];
    Node * root = convert(arr,n,0,n-1);
    
    print_level(root);
    
    return 0;
}