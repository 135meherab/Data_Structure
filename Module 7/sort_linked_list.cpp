
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
void insert_tail(Node * & head, Node * &tail, int value)
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
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    int v;
    while (true)
    {
        cin>>v;
        if(v == -1) break;
        insert_tail(head,tail,v);
    }
    for (Node * i = head; i->next_node != NULL ; i= i->next_node)
    {
        for (Node * j = i->next_node; j != NULL; j = j->next_node)
        {
            if(i->value > j->value)
            {
                swap(i->value,j->value);
            }
        }
        
    }
    print_linked_list(head);

    return 0;
}