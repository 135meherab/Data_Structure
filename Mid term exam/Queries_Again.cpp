#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int value;
        Node * next_node;
        Node * prev_node;
        Node(int value)
        {
            this->value = value;
            this->next_node = NULL;
            this->prev_node = NULL;

        }
};
void insert_at_head(Node * & head, Node * & tail, int v)
{
    Node * newnode = new Node(v);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next_node = head;
    newnode->prev_node = NULL;
    head = newnode;
}
void insert_at_tail(Node * & head, Node * & tail, int v)
{
    Node * newnode = new Node(v);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next_node = newnode;
    newnode->prev_node = tail;
    tail = newnode;
}
void insert_at_pos(Node * head, int pos, int v)
{
    Node * newnode = new Node(v);
    Node * tmp = head;
    for (int i = 1; i <= pos-1; i++)
    {
        tmp = tmp->next_node;
    }
    newnode->next_node = tmp->next_node;
    newnode->prev_node= tmp;
    tmp->next_node->prev_node =newnode;
    tmp->next_node = newnode; 
    
}
int size_of(Node * head)
{
    Node * tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next_node;
    }
    return cnt;
}
void print_normal(Node * head)
{
    if(head == NULL) return;
    cout<<head->value<<" ";
    print_normal(head->next_node);
}
void print_reverse(Node * head)
{
    if(head == NULL) return;
    print_reverse(head->next_node);
    cout<<head->value<<" ";
    
}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    int q;
    cin>>q;
    int x,v;
    while (q--)
    {
        cin>>x>>v;
        if(x > size_of(head))
        {
            cout<<"Invalid"<<endl;
            continue;
        } 
        else if (x == 0)
        {
            insert_at_head(head,tail,v);
            cout<<"L -> ";
            print_normal(head);
            cout<<endl;
            cout<<"R -> ";
            print_reverse(head);
            cout<<endl;
            continue;
        } 
        else if (x == size_of(head))
        {
            insert_at_tail(head,tail,v);
            cout<<"L -> ";
            print_normal(head);
            cout<<endl;
            cout<<"R -> ";
            print_reverse(head);
            cout<<endl;
            continue;
        }
        else
        {
            insert_at_pos(head,x,v);
            cout<<"L -> ";
            print_normal(head);
            cout<<endl;
            cout<<"R -> ";
            print_reverse(head);
            cout<<endl;
            
        } 
    }
    
    return 0;
}