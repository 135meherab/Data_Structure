#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        string s;
        cin>>s;
        stack<char> st;
        for (char c:s)
        {
            if(st.empty())
            {
                st.push(c);
            }
            else if((c == 'R' && st.top()=='B') || (c == 'B' && st.top()=='R'))
            {
                st.pop();
                if(!st.empty() && st.top()=='P')
                {
                    st.pop();
                }
                else st.push('P');
            }
            else if((c == 'R' && st.top()=='G') || (c == 'G' && st.top()=='R'))
            {
                st.pop();
                if(!st.empty() &&st.top()=='Y')
                {
                    st.pop();
                }
                else st.push('Y');
            }
            else if((c == 'G' && st.top()=='B') || (c == 'B' && st.top()=='G'))
            {
                st.pop();
                if(!st.empty() && st.top()=='C')
                {
                    st.pop();
                }
                else st.push('C');
            }
            else if(st.top()==c)
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
        stack <char> newSt;
        while (!st.empty())
        {
            newSt.push(st.top());
            st.pop();
        }
        while(!newSt.empty())
        {
            cout<<newSt.top();
            newSt.pop();
        }
        cout<<endl;
        
           
    }
    
    return 0;
}