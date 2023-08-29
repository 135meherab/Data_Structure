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
void insert_at_head_tail(Node * &head, Node * &tail, int value)
{
    Node * newNode = new Node(value);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next_node = newNode;
    tail = newNode;
}
int size_of(Node * head)
{
    Node * tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next_node;
    }
    return cnt;
}
void print_linked(Node * head)
{
    Node * tmp = head;
    while (true)
    {
        cout<<tmp->value<<" ";
        tmp = tmp->next_node;
    }
}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    Node * head1 = NULL;
    Node * tail1 = NULL;
    int v;
    while (true)
    {
        cin>>v;
        if(v == -1) break;
        insert_at_head_tail(head,tail,v);
    }
    // print_linked(head);
    int size  = size_of(head);
    
    while (true)
    {
        cin>>v;
        if(v == -1) break;
        insert_at_head_tail(head1,tail1,v);

    }
    int size1 = size_of(head1);
    (size == size1) ? cout<<"YES": cout<<"NO";
    return 0;
}