#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue <int> q;
    int n,m;
    cin>>n;
    int v;
    for (int i = 0; i < n; i++)
    {
        cin>>v;
        st.push(v);
    }
    cin>>m;
    for (int i = 0; i < m; i++)
    {
        cin>>v;
        q.push(v);
    }
    bool flag = true;
    if(m == n)
    {
        while (!st.empty()) 
        {
            if(st.top()!=q.front())
            {
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }
        
    }
    else
    {
        flag = false;
    }
    (flag == true) ? cout<<"YES": cout<<"NO";
    return 0;
}