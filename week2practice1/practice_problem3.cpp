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
    int cnt = 0;
    while (true)
    {
        int v;
        cin>>v;
        if(v==-1) break;
        else
        {
            insert_at_tail(head,v);
            cnt++;
        }
        
    }
    int odd_time = (cnt+1)/2;
    int even_time = cnt/2;
    if(cnt % 2 != 0)
    {
        Node * tmp = head;
        for (int i = 0; i < odd_time-1; i++)
        {
           tmp = tmp->next_node;
        }
        cout<<tmp->value;
    }
    else
    {
        Node * tmp = head;
        for (int i = 0; i < even_time-1; i++)
        {
           tmp = tmp->next_node;
        }
        cout<<tmp->value<<" "<<tmp->next_node->value;
    }
    return 0;
}