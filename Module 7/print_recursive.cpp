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
void insert_at_tail(Node * &head, Node * &tail, int v)
{
    Node * newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next_node = newNode;
    tail = newNode;
}
void print_recursive(Node * tmp)
{
    while (tmp == NULL) return; 
    print_recursive(tmp->next_node);
    cout<<tmp->value<<" ";
}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    int v;
    while (true)
    {
       cin>> v;
       if(v == -1) break;
       insert_at_tail(head,tail,v); 
    }
    print_recursive(head);
    return 0;
}