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
void insert(Node * & head, Node * & tail, int value)
{
    Node * newnode = new Node(value);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next_node = newnode;
    tail = newnode;
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
        insert(head,tail,v);
    }
    int max = INT_MIN;
    Node * tmp = head;
    while (tmp != NULL)
    {
        if(tmp->value > max) max = tmp->value;
        tmp = tmp->next_node;
    }
    cout<< max;
    return 0;
}