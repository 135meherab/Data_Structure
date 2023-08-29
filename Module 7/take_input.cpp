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
void insert_tail(Node * & head, Node * &tail, int value)
{
    Node * newNode = new Node(value);
    if(head==NULL)
    {
        head=newNode;
        tail = newNode;
        return;
    }
    tail->next_node=newNode;
    tail = newNode;
}
void print_linked_list(Node * head)
{
    Node * tmp = head;
    while(tmp != NULL)
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
    int value;
    while(true)
    {
        cin>>value;
        if(value == -1) break;
        insert_tail(head,tail,value);
    }
    print_linked_list(head);
    return 0;
}