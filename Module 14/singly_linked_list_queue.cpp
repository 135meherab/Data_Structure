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
class MyQueue
{
    public:
        Node * head = NULL;
        Node * tail = NULL;
        int sz = 0;
    void push(int val)
    {
        Node * newnode = new Node(val);
        sz++;
        if(head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        
        tail->next_node = newnode;
        tail = newnode;
        
    }
    void pop()
    {
        sz--;
        Node * deletenode = head;
        head = head->next_node;
        delete deletenode;
        if(head == NULL) tail = NULL;
        
    }
    int front()
    {
        return head->value;
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
    MyQueue q;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    while (!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    
    
    return 0;
}