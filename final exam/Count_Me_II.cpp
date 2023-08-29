#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin>>n;
        map<int, int> mp;
        int mx_cnt = 0;
        int mx_key;
        for(int j = 0; j<n; j++)
        {
            int val;
            cin>>val;
            mp[val]++;
            if(mp[val] > mx_cnt)
            {
                mx_cnt = mp[val];
                mx_key = val;
            }
            if(mp[val] == mx_cnt)
            {
                mx_key = max(mx_key,val);
            }
        }

        cout<<mx_key<<" "<<mx_cnt<<endl;

    }
    
    return 0;
}