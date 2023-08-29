#include <bits/stdc++.h>
using namespace std;\
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
void print_linked_list(Node * head)
{
    Node * tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->value<<" ";
        tmp = tmp->next_node;
    }
    cout<<endl;
    
}
void insert_at_tail(Node * &head,int value)
{
    Node * newNode = new Node(value);
    while(head == NULL)
    {
        head = newNode;
        return;
    }
    Node * tmp = head;
    while (tmp->next_node!=NULL)
    {
        tmp= tmp->next_node;
    }
    tmp->next_node=newNode;
    
    
}
void insert_at_head(Node * &head,int value)
{
    Node * newNode = new Node(value);
    newNode->next_node = head;
    head = newNode;
    print_linked_list(head);
}
void insert_at_any_position(Node * head,int pos,int value)
{
    Node * newNode = new Node(value);
    Node * tmp = head;
    for (int i = 1; i <= pos -1; i++)
    {
        tmp = tmp->next_node;
        if(tmp==NULL)
        {
            cout<<"Invalid"<<endl;
            return;
        }
    }
    newNode->next_node = tmp->next_node;
    tmp->next_node = newNode;
    print_linked_list(head);
    
}

int main()
{
    Node * head = NULL;
    while (true)
    {
        int v;
        cin>>v;
        if(v==-1) break;
        else
        {
            insert_at_tail(head,v);
        }
        
    }
    int q;
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        int index, value;
        cin>>index>>value;
        if(index == 0)
        {
            insert_at_head(head,value);
            
        }
        else
        {
            insert_at_any_position(head,index,value);
        }
        
    }
    
    return 0;
}