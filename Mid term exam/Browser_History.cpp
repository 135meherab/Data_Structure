#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string value;
    Node *next_node;
    Node *prev_node;
    Node(string value)
    {
        this->value = value;
        this->next_node = NULL;
        this->prev_node = NULL;
    }
};
void insert(Node *&head, Node *&tail, string s)
{
    Node *newnode = new Node(s);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next_node = newnode;
    newnode->prev_node = tail;
    tail = newnode;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    string s;
    while (true)
    {
        cin >> s;
        if (s == "end")
            break;
        insert(head, tail, s);
    }
    int q;
    cin >> q;
    string command;
    string address;
    Node * curr = head;
    while (q--)
    {

        cin >> command;
        Node *tmp = head;
        if (command == "visit")
        {
            int flag = 0;
            cin >> address;
            while (tmp != NULL)
            {
                if (tmp->value == address)
                {
                    flag =1;
                    curr = tmp;
                    break;
                }
                tmp = tmp->next_node;
            }
            (flag == 1) ? cout<<address<<endl: cout<<"Not Available"<<endl;
        }
        else if (command == "prev")
        {
            if (curr->prev_node == NULL)
            {
                cout << "Not Available" << endl;
                
            }
            else
            {
                curr = curr->prev_node;
                cout << curr->value << endl;
            }
        }
        else if (command == "next")
        {
            if (curr->next_node == NULL)
            {
                cout << "Not Available" << endl;
                
            }
            else
            {
                curr = curr->next_node;
                cout << curr->value << endl;
            }
        }
    }

    return 0;
}