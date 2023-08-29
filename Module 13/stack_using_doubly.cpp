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
class MyStack
{
    public:
    Node * head = NULL;
    Node * tail = NULL;
    int sz = 0;
    void push(int v)
    {
        sz++;
        Node * newnode = new Node(v);
        if(head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        
        tail->next_node = newnode;
        newnode->prev_node = tail;
        tail = newnode;
    }
    void pop()
    {
        sz--;
        Node * deletenode = tail;
        tail = tail->prev_node;
        if(tail == NULL)
        {
            head = NULL;
        }
        delete deletenode;
    }
    int top()
    {
        return tail->value;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if(sz == 0) return true;
        else return false;
    }
};


int main()
{
    MyStack s;
    int n;
    cin>>n;
    int v;
    for (int i = 0; i < n; i++)
    {   
        cin>>v;
        s.push(v);
    }
    while (!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}