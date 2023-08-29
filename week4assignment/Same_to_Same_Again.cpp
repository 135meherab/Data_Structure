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
class myQueue
{
    public:
        Node * head = NULL;
        Node * tail = NULL;
        int sz=0;
        void push(int v)
        {
            sz++;
            Node * newNode = new Node(v);
            if(head == NULL)
            {
                head = newNode;
                tail = newNode;
                return;
            }
            tail->next_node = newNode;
            tail = newNode;
        }
        void pop()
        {
            sz--;
            Node * deleteNode = head;
            head = head->next_node;
            delete deleteNode;
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
class myStack
{
    public:
        vector<int> st;
        void push(int v)
        {
            st.push_back(v);
        }
        void pop()
        {
            st.pop_back();
        }
        int top()
        {
            return st.back();
        }
        int sz()
        {
            return st.size();
        }
        bool empty()
        {
            return st.empty();
        }
};
int main()
{
    myStack st;
    myQueue q;
    int n,m;
    cin>>n>>m;
    int v;
    for (int i = 0; i < n; i++)
    {
        cin>>v;
        st.push(v);
    }
    for (int i = 0; i < m; i++)
    {
        cin>>v;
        q.push(v);
    }
    int flag = 0;
    if(n == m)
    {
        while (!st.empty())
        {
            if (st.top()==q.front()) flag = 1;
            else
            {
                flag = 0;
                break;
            } 
            st.pop();
            q.pop();
        }
        if(flag == 1) cout<<"YES";
        else cout<<"NO";
        
    } 
    else
    {
        cout<<"NO";
    }
    return 0;
}