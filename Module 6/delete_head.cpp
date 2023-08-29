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
        cout<<"!!! Message: Inserted at Head"<<endl;
        return;
    }

    
    while (tmp->next_node!=NULL)
    {
        tmp = tmp->next_node;
    }
    tmp->next_node = newNode;
    cout<<"!!! Message: Inserted at tail"<<endl;
    
}

void insert_at_head(Node * &head, int value)
{
    Node * newnode = new Node(value);
    newnode->next_node = head;
    head = newnode;
    cout<<"!!! Message: Inserted at head";
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
    cout<<"!!! Message: Inserted at position: "<<pos<<endl;
}

void delete_from_any_position(Node * head,int pos)
{
    
    Node * tmp = head;
    for (int i = 1; i <= pos-1; i++)
    {
        tmp = tmp->next_node;
    }
    Node * deleteNode = tmp->next_node;
    tmp->next_node = tmp->next_node->next_node;
    delete deleteNode;
    cout<<"!!! Message: Deleted from positon: "<<pos<<endl;
}
void delete_head(Node * &head)
{
    Node * deleteHead = head;
    head = head->next_node;
    delete deleteHead;
    cout<<"!!! Message: Deleted head"<<endl;
}

void print_linked_list(Node * head)
{
    Node * tmp = head;
    cout<<"Your linked list: ";
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
        cout<<"1. Insert at tail"<<endl;
        cout<<"2. Insert at head"<<endl;
        cout<<"3. Insert at any position"<<endl;
        cout<<"4. Delete from any position"<<endl;
        cout<<"5. Delete head"<<endl;
        cout<<"6. Print Linked list"<<endl;
        int option;
    cin>>option;
    if(option == 1)
    {
        int v;
        cout<<"Enter a value: ";
        cin>>v;
        insert_at_tail(head,v);
    }
    else if(option==2)
    {
        int v;
        cout<<"Enter a value: ";
        cin>>v;
        insert_at_head(head, v);
    }
    else if (option ==3)
    {
        int v;
        cout<<"Enter a value: ";
        cin>>v;
        int pos;
        cout<<"Enter a positon: ";
        cin>>pos;
        if(pos == 0)
        {
            insert_at_head(head,v);
        }
        else
        {
            insert_at_any_position(head,pos,v);
        }
    }
    else if (option == 4)
    {
        int pos;
        cout<<"Enter position: ";
        cin>>pos;
        if(pos ==0) delete_head(head);
        else delete_from_any_position(head,pos);
    }
    else if (option==5)
    {
        delete_head(head);
    }
    
    else if(option == 6)
    {
        print_linked_list(head);
    }
    }
    
    return 0;
}