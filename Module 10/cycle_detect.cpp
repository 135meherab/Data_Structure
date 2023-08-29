#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int value;
        Node * next_node;
        Node * prev_node;
        Node(int value)
        {
            this->value = value;
            this->next_node = NULL;
            this->prev_node = NULL;

        }
};



int main()
{
    Node * head = new Node (10);
    Node * a = new Node (20);
    Node * b = new Node (30);
    Node * c = new Node (40);
    // Node * d = new Node (50);
    Node * tail = c;

    head->next_node = a;
    a->next_node = b;
    b->next_node = c;
    c->next_node = a;
    
    Node * slow = head;
    Node * fast = head;
    while (fast != NULL && fast->next_node!=NULL)
    {
        slow = slow->next_node;
        fast = fast->next_node->next_node;
        if (fast == slow)
        {
            cout<<"cycle Detected"<<endl;
            break;
        }
    }
    
    return 0;
}