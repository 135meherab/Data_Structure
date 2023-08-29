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
    int cnt[101]={0};
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
    while(tmp != NULL)
    {
        int value = tmp->value;
        cnt[value]++;
        tmp=tmp->next_node;
    }
    int flag = 0;
    for (int i = 0; i < 101; i++)
    {
        if(cnt[i]>1)
        {
            flag = 1;
            break;
        } 
        
    }
    (flag==1) ? cout<<"YES" : cout<<"NO";
    return 0;
}