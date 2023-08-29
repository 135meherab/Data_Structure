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

void insert_at_tail(Node *&head,int value)
{
    Node * newNode = new Node(value);
    Node * tmp = head;
    while(head == NULL)
    {
        head = newNode;
        cout<<"Inserted at head"<<endl<<endl;
        return;
    }
    while (tmp->next_node!= NULL)
    {
        tmp = tmp->next_node;
    }
    tmp->next_node= newNode;
    cout<<"Inserted at tail"<<endl<<endl;

}
void insert_at_head(Node * &head, int value)
{
    Node * newNode = new Node(value);
    newNode->next_node = head;
    head = newNode;
    cout<<"Inserted at head"<<endl<<endl;
}
void insert_at_any_position(Node * head, int pos, int value)
{
    Node * newNode = new Node(value);
    Node * tmp = head;
    for (int i = 1; i <= pos-1; i++)
    {
        tmp = tmp->next_node;
    }
    newNode->next_node = tmp->next_node;
    tmp->next_node = newNode;
    cout<<"Inserted at positon: "<< pos<<endl<<endl;
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
    cout<<endl;
}
int main()
{
    Node * head = NULL;
    while (true)
    {
        cout<<"1.Inster at Tail"<<endl;
        cout<<"2.Insert at head"<<endl;
        cout<<"3.Inster at any position"<<endl;
        cout<<"4.Print linked list"<<endl;
        cout<<"5.Tarminate"<<endl;
        int option;
        cin>>option;
        if(option == 1)
        {
            cout<<"Enter a value: ";
            int v;
            cin>>v;
            insert_at_tail(head,v);
        }
        else if(option == 2)
        {
            cout<<"Enter a value: ";
            int v;
            cin>>v;
            insert_at_head(head,v);
        }
        else if (option == 3)
        {
            int pos, value;
            cout<<endl<<"Enter position: ";
            cin>>pos;
            cout<<endl<<"Enter a value: ";
            cin>>value;
            if(pos==0)
            {
                insert_at_head(head,value);
            }
            else
            {
                insert_at_any_position(head,pos,value);
            }
        }
        else if (option == 4)
        {
                print_linked_list(head);
        }

    }
    
    return 0;
}