
#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int data;
        Node * next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;

        }
};


class Stack
{
    Node * top = NULL; 
    int sz = 0;
    //Write your code here

public:
    Stack()
    {
        
    }

    int getSize()
    {
        return sz;
    }

    bool isEmpty()
    {
        if(sz == 0) return true;
    }

    void push(int data)
    {
        sz++;
        Node * newNode = new Node(data);
        newNode->next = top;
        top = newNode;
    }

    void pop()
    {
        Node * tmp;
        if(sz == 0) return;
        tmp = top;
        
        top = tmp->next;
        sz--;
    }

    int getTop()
    {
        return top->data;
    }
};