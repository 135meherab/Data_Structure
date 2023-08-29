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
void insert_at_tail(Node * &head, int value)
{
    Node * newNode = new Node(value);
    
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Node * tmp = head;
    while (tmp->next_node!=NULL)
    {
        tmp = tmp->next_node;
    }
    tmp->next_node = newNode;
    
}

void print_linked_list(Node * head)
{
    cout<<"Your linked list: ";
    Node * tmp = head;
    while (tmp!=NULL)
    {
        cout<<tmp->value<<" ";
        tmp = tmp->next_node;
    }
    
}
int main()
{
    Node * head = NULL;
    
    while (true)
    {
        cout<<"Opntion 1: Insert at tail"<<endl;
        cout<<"Opntion 2: Print linked list"<<endl;
        cout<<"Opntion 3: Tarminate process"<<endl;
        int op;
        cin>>op;
        if(op ==1)
        {
            cout<<"Enter a value: ";
            int v;
            cin>>v;
            insert_at_tail(head,v);
        }
        else if(op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            break;
        }
    }
    
    return 0;
}