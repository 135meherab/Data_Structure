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
int main()
{
    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * tail = b;
    head->next_node = a;
    a->next_node = b;

    b->prev_node = a;
    a->prev_node = head;    

    print_normal(head);
    print_reverse(tail);
    return 0;
}