#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        stack <int> st;
        string s;
        cin>>s;
        for (char c:s)
        {
            if(st.empty())
            {
                st.push(c);
            }
            else if(c=='A' && st.top()=='B')
            {
                st.pop();
            }
            else if(c=='B' && st.top()=='A')
            {
                st.pop();
            }
            else st.push(c);
        }
        if(st.empty()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    
    
    return 0;
}