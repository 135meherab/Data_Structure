#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue <int> q;
    queue <int> newQ;
    int n;
    cin>>n;
    int v;
    for (int i = 0; i < n; i++)
    {
        cin>>v;
        q.push(v);
    }
    stack<int> st;
    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }
    while (!st.empty())
    {
        newQ.push(st.top());
        st.pop();
    }
    while (!newQ.empty())
    {
        cout<<newQ.front()<<" ";
        newQ.pop();
    }
    
    
    return 0;
}