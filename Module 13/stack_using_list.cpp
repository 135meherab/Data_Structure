#include <bits/stdc++.h>
using namespace std;
class MyStack
{
    public:
        list<int> l;
        void push(int v)
        {
            l.push_back(v);
        }
        void pop()
        {
            l.pop_back();
        }
        int top()
        {
            return l.back();
        }
        int size()
        {
            return l.size();
        }
        bool empty()
        {
            if (l.size() == 0) return true;
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