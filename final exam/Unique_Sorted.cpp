#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    for (int i = 1; i <= t; i++)
    {
        set<int> s;
        int n;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            int v;
            cin>>v;
            s.insert(v);
        }
        vector<int> v;
       for(auto it = s.begin(); it != s.end(); it++)
       {
            v.push_back(*it);
       }
       sort(v.begin(),v.end(),greater<int>());
       for(int val: v)
       {
            cout<<val<<" ";
       }
       cout<<endl;
    }
    
    return 0;
}