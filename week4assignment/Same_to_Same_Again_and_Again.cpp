#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> q;
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