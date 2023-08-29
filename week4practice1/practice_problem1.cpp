#include <bits/stdc++.h>
using namespace std;
class MyStack
{
    public:
    vector <int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        if(v.size()==0) return true;
        else return false;
    }
};
int main()
{
    int n,m;
    cin>>n;
    MyStack st;
    MyStack st2;
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
        st2.push(v);
    }
    bool flag = true;
    if(m == n)
    {
        while (!st.empty())     
        {
            if(st.top()!=st2.top())
            {
                flag = false;
                break;
            }
            st.pop();
            st2.pop();
        }
        
    }
    else
    {
        flag = false;
    }
    (flag == true) ? cout<<"YES": cout<<"NO";
    return 0;
}