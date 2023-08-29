#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack <int> st;
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
        cout<<st.top()<<endl;
        st.pop();
    }
    
    
    return 0;
}