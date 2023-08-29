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
void insert(Node * & head, Node * & tail, int val)
{
    Node * newnode = new Node (val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next_node=newnode;
    tail = newnode;
}
void sort_linked(Node * head)
{

    for (Node *  i = head; i->next_node != NULL; i= i->next_node)
    {
        for (Node * j = i->next_node; j != NULL; j=j->next_node)
        {
            if(i->value > j->value) swap(i->value,j->value);
        }
        
    }
     
}
int linked_size(Node * head)
{
    Node * tmp = head;
    int cnt = 0;
    while(tmp != NULL)
    {
        cnt++;
        tmp = tmp->next_node;
    }
    return cnt;
}
void print_linked_list(Node * head)
{
    Node * tmp = head;
    while (tmp!= NULL)
    {
        cout<<tmp->value<<" ";
        tmp = tmp->next_node;
    }
    cout<<endl;
    
}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    int v;
    while (true)
    {
        cin>>v;
        if(v==-1) break;
        insert(head, tail, v);
    }
    sort_linked(head);
    
    Node * i = head;
    while(i->next_node!=NULL)
    {
        if(i->value == i->next_node->value)
        {
            i->next_node = i->next_node->next_node;
        }
        else
        {
            i = i->next_node;
        }
    }
    print_linked_list(head);
    
    
    return 0;
}