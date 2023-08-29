#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt = 0;
    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < n; i++)
    {
        int cnt_num = v[i]+1;
        if(find(v.begin()+i,v.end(),cnt_num) != v.end()) cnt++;
    }
    cout<<cnt;
    return 0;
}