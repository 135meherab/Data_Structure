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
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    int v;
    while(true)
    {
        cin>>v;
        if(v == -1 ) break;
        insert_at_head_tail(head,tail,v);
    }
    
    Node * tmp = head;
    if(size_of(head)%2!=0)
    {
        for (int i = 1; i < (size_of(head)+1)/2; i++)
        {
            tmp = tmp->next_node;   
        }
        cout<<tmp->value;
    }
    
    else
    {
        for (int i = 1; i < size_of(head)/2; i++)
        {
            tmp = tmp->next_node;   
        }
        cout<<tmp->value<<" ";
        cout<<tmp->next_node->value;
    }

    return 0;
}