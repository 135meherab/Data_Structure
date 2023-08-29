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
void insert_at_tail(Node * & head, Node * & tail,int value)
{
    Node * newNode = new Node(value);
    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next_node = newNode;
    tail = newNode;
}
void print_orginal_recusive(Node * tmp)
{
    if(tmp == NULL) return;
    cout<<tmp->value<<" ";
    print_orginal_recusive(tmp->next_node);
}
void print_reverse_recusive(Node * tmp)
{
    if(tmp == NULL) return;
    print_reverse_recusive(tmp->next_node);
    cout<<tmp->value<<" ";
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
        insert_at_tail(head,tail,v);
    }
    print_reverse_recusive(head);
    cout<<endl;
    print_orginal_recusive(head);
    return 0;
}