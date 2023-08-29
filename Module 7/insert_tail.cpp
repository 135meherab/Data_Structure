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
void print_linked_list(Node * head)
{
    Node * tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->value<<" ";
        tmp = tmp->next_node;
    }
    cout<<endl;
}
void insert(Node *head, int pos, int value)
{
    Node * newNode = new Node(value);
    Node * tmp = head;
    for (int i = 1; i <=pos-1 ; i++)
    {
        tmp=tmp->next_node;
    }
    newNode->next_node = tmp->next_node;
    tmp->next_node = newNode;
}
int size(Node * head)
{
    Node * tmp = head;
    int cnt = 0;
    while(tmp!=NULL)
    {
        cnt++;
        tmp = tmp->next_node;
    }
    return cnt;
    
}
void insert_at_head(Node * &head,int value)
{
    Node * newNode = new Node(value);
    newNode->next_node = head;
    head = newNode;
}
void insert_tail(Node * & head, Node * tail, int value)
{
    Node * newNode = new Node(value);
    if(head==NULL)
    {
        head=newNode;
        tail = newNode;
        return;
    }
    tail->next_node=newNode;
    tail = newNode;
}
int main()
{
    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);
    Node * d = new Node(50);
    head->next_node = a;
    a->next_node = b;
    b->next_node = c;
    c->next_node = d;
    Node * tail = d;
    print_linked_list(head);
    int v;
    cin>>v;
    int pos;
    cin>>pos;
    if(pos>size(head))
    {
        cout<<"Invalid"<<endl;
    }
    else if(pos==0)
    {
        insert_at_head(head,v);
    }
    else if(pos == size(head))
    {
        insert_tail(head,tail,v);
    }
    else insert(head,pos,pos);
    print_linked_list(head);
    return 0;
}