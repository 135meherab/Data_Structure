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
void print_linked(Node * head)
{
    Node * tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->value<<" ";
        tmp = tmp->next_node;
    }
    cout<<endl;
}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    Node * head1  = NULL;
    Node * tail1 = NULL;
    int v;
    while (true)
    {
        cin>>v;
        if(v == -1) break;
        insert_at_tail(head,tail,v);
    }
    int size = size_of_linked(head);
    int v1;
    while (true)
    {
        cin>>v1;
        if(v1 == -1) break;
        insert_at_tail(head1,tail1,v1);
    }
    int size1 = size_of_linked(head1);
    int flag = 0;
    
    if(size == size1)
    {
        Node * tmp = head;
        Node * tmp1 = head1;
        while(tmp != NULL)
        {
            if(tmp->value == tmp1->value)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
            tmp = tmp->next_node;
            tmp1 = tmp1->next_node;
            
        }   
    }
    (flag == 1) ? cout<<"YES": cout<<"NO";      
    return 0;
}