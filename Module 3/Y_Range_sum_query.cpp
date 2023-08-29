#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    long long int prefix_sum[n];
    prefix_sum[0]=a[0];
    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = prefix_sum[i-1] + a[i];
    }
    
    for (int i = 0; i < q; i++)
    {
        int l,r;
        cin>>l>>r;
        l = l-1, r = r -1;
        if(l==0)cout<<prefix_sum[r]<<endl;
        else cout<<prefix_sum[r]-prefix_sum[l-1]<<endl;
    }
    
    return 0;
}