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
void print_normal(Node * head)
{
    Node * tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->value<<" ";
        tmp = tmp->next_node;
    }
    cout<<endl;
}
void print_reverse(Node * tail)
{
    Node * tmp = tail;
    while (tmp != NULL)
    {
        cout<<tmp->value<<" ";
        tmp = tmp->prev_node;
    }
    cout<<endl;
    
}
void insert_at_any_pos(Node * head, int pos,int value)
{
    Node * newNode = new Node(value);
    Node * tmp = head;
    for (int i = 1; i <= pos-1; i++)
    {
       tmp = tmp->next_node;
    }
    newNode->next_node = tmp->next_node;
    tmp->next_node->prev_node = newNode;
    newNode->prev_node = tmp;
    tmp->next_node = newNode;
}
int main()
{
    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node (40);
    Node * tail = c;
    head->next_node = a;
    a->next_node = b;
    b->next_node = c;
    
    c->prev_node = b;
    b->prev_node = a;
    a->prev_node = head;    

    insert_at_any_pos(head,4,100);
    print_normal(head);
    print_reverse(tail);
    return 0;
}