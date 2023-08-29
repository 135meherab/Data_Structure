#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    stack<int> newSt;
    int n;
    cin>>n;
    int v;
    for (int i = 0; i < n; i++)
    {
        cin>>v;
        st.push(v);
    }
    while (!st.empty()) 
    {
        newSt.push(st.top());
        st.pop();
    }
    while (!newSt.empty()) 
    {
        cout<<newSt.top()<<" ";
        newSt.pop();
    }
    
    
    return 0;
}