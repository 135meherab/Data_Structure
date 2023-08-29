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
    Node * tmp = head;
    while (head == NULL)
    {
        head = newNode;
        cout<<endl<<"Inserted at head"<<endl;
        return;

    }
    
    while (tmp->next_node!=NULL)
    {
        tmp = tmp->next_node;
    }
    tmp->next_node = newNode;
    cout<<endl<<"Inserterd at tail"<<endl;
    
}

void insert_at_any_position(Node * head, int pos, int value)
{
    Node * newNode = new Node(value);
    Node * tmp = head;
    for (int i = 1; i <= pos-1; i++)
    {
        tmp = tmp->next_node;
    }
    newNode->next_node=tmp->next_node;
    tmp->next_node = newNode;
    cout<<endl<<"Inserted at position: "<<pos<<endl;
    
}

void print_linked_list(Node * head)
{
    Node * tmp = head;
    cout<<endl<<"Your linked list: ";
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
    bool start = true;
    while (start)
    {
        cout<<"1.Insetr value"<<endl;
        cout<<"2.Print linked list"<<endl;
        cout<<"3.Insetr at any position"<<endl;
        cout<<"4.Terminate process"<<endl;
        int option;
        cin>>option;
        if(option == 1)
        {
            cout<<"Enter a value: ";
            int v;
            cin>>v;
            insert_at_tail(head,v);
        }
        else if (option == 2)
        {
            print_linked_list(head);
        }
        else if (option = 3)
        {
            int pos, value;
            cout<<"Enater positon: ";
            cin>>pos;
            cout<<"Enter Value: ";
            cin>>value;
            insert_at_any_position(head,pos,value);
        }
        else if (option == 4)
        {
            break;
        }
        break;
    }
    
    return 0;
}