#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int value;
        Node * next_node;
        Node(int value)
        {
            this->value = value;
            this->next_node = NULL;

        }
};
void insert_at_head(Node * & head, Node * & tail, int value)
{
    Node * newNode = new Node(value);
    if(head == NULL) 
    {
        head = newNode;
        tail = newNode;
        return;
    }
    
    newNode->next_node = head;
    head = newNode;
    
}
void insert_at_tail(Node * &head, Node * &tail,int value)
{
    Node * newNode = new Node(value);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next_node = newNode;
    tail = newNode;
    
}
void pirnt_linked_list(Node * head)
{
    Node * tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->value<<" ";
        tmp=tmp->next_node;
    }
    
}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    
    int q;
    cin>>q;
    for (int i = 1; i <= q; i++)
    {
        int x, v;
        cin>>x>>v;
        if(x == 0 ) insert_at_head(head,tail,v);
        else insert_at_tail(head,tail,v);
        cout<<head->value<<" "<<tail->value<<endl;
        
    }
    
    return 0;
}