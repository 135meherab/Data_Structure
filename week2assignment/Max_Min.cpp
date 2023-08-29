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
int size_of_linked(Node * head)
{
    int cnt=0;
    Node * tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next_node;
    }
    return cnt;
    
}
int mn(Node * head)
{
    Node * tmp = head;
    int mn = INT_MAX;
    for (int i = 0; i < size_of_linked(head); i++)
    {
        if(tmp->value<mn) mn = tmp->value;
        tmp = tmp->next_node;
    }
    return mn;
}
int mx(Node * head)
{
    Node * tmp = head;
    int mx = INT_MIN;
    for (int i = 0; i < size_of_linked(head); i++)
    {
        if(tmp->value>mx) mx = tmp->value;
        tmp = tmp->next_node;
    }
    return mx;
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
    
    
    cout<<mx(head)<<" "<<mn(head);
    return 0;
}