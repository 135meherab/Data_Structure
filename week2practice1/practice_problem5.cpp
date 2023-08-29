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
void insert_at_tail(Node * &head,int value)
{
    Node * newNode = new Node(value);
    while(head == NULL)
    {
        head = newNode;
        return;
    }
    Node * tmp = head;
    while (tmp->next_node!=NULL)
    {
        tmp= tmp->next_node;
    }
    tmp->next_node=newNode;
    
    
}
int main()
{
    Node * head = NULL;
    
    while (true)
    {
        int v;
        cin>>v;
        if(v==-1) break;
        else
        {
            insert_at_tail(head,v);
            
        }
        
    }
    Node * tmp = head;
    int flag = 1;
    while (tmp->next_node != NULL)
    {
        if(tmp->value <= tmp->next_node->value)
        {
            tmp = tmp->next_node;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    (flag == 0) ? cout<<"NO" : cout<<"YES";
    return 0;
}