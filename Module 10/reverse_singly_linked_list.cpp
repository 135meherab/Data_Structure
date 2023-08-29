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

void normal_print(Node * head)
{
    if(head == NULL) return;
    cout<<head->value<<" ";
    normal_print(head->next_node);
}
void reverse_print(Node * head)
{
    if(head == NULL) return;
    reverse_print(head->next_node);
    cout<<head->value<<" ";
}
void reverse_linked_list(Node * &head, Node * current)
{
    if(current->next_node == NULL)
    {
        head = current;
        return;
    }
    reverse_linked_list(head,current->next_node);
    current->next_node->next_node = current;
    current->next_node = NULL;
}
void print_linked_list(Node * head)
{
    Node * tmp = head;
    while (tmp == NULL)
    {
        cout<<tmp->value<<" ";
        tmp = tmp->next_node;
    }
    cout<<endl;
}
int main()
{
    Node * head = new Node(10);   
    Node * a = new Node(20);   
    Node * b = new Node(30);   

    head->next_node = a;
    a->next_node = b;
    reverse_linked_list(head,head);

    normal_print(head);
    cout<<endl;
    reverse_print(head);
    return 0;
}