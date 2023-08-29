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
void normal_print(Node * head)
{
    if(head == NULL) return;
    cout<<head->value<<" ";
    normal_print(head->next_node);
}
void reverse_doubly(Node * head, Node * tail)
{
    Node * i = head;
    Node * j = tail;
    while (i != j && i->next_node!= j)
    {
        swap(i->value,j->value);
        i = i->next_node;
        j = j->prev_node;
    }
    swap(i->value,j->value);
}


int main()
{
    Node * head = new Node (10);
    Node * a = new Node (20);
    Node * b = new Node (30);
    Node * c = new Node (40);
    // Node * d = new Node (50);
    Node * tail = c;

    head->next_node = a;
    a->next_node = b;
    b->next_node = c;
    // c->next_node = d;
    
    // d->prev_node= c;
    c->prev_node = b;
    b->prev_node = a;
    a->prev_node = head;
    reverse_doubly(head,tail);
    normal_print(head);
    return 0;
}