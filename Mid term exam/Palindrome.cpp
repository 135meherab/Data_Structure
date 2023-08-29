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
void insert(Node * & head, Node * & tail, int val)
{
    Node * newnode = new Node (val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next_node=newnode;
    tail = newnode;
}
int linked_size(Node * head)
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
void reverse(Node * &head, Node * current)
{
    if(current->next_node == NULL)
    {
        head = current;
        return;
    }
    reverse(head,current->next_node);
    current->next_node->next_node = current;
    current->next_node = NULL; 
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
        insert(head,tail,v);
    }
    Node * head1 = NULL;
    Node * tail1 = NULL;
    Node * tmp = head;
    while (tmp != NULL)
    {
        insert(head1,tail1,tmp->value);
        tmp = tmp->next_node;
    }
    reverse(head1,head1);
    
    int flag = 1;
    Node * tmp1 = head;
    Node * tmp2 = head1;
    for (int i = 1; i < linked_size(head) ; i++)
    {
        if(tmp1->value != tmp2->value) 
        {
            flag = 0;
            break;
        }
        tmp1 = tmp1->next_node;
        tmp2 = tmp2->next_node;
    }
    (flag == 1) ? cout<<"YES": cout<<"NO";
    
    
    return 0;
}