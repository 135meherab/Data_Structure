#include <bits/stdc++.h>
using namespace std;
class MyStack
{
    public:
        vector<int> v;
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
            if(v.size()== 0) return true;
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