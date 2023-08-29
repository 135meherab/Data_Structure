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
        cout<<tmp->value;
        tmp = tmp->next_node;
    }
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
    print_linked_list(head);
    
    return 0;
}