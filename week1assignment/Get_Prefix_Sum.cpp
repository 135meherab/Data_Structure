#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    long long int pre_sum[n];
    pre_sum[0]=a[0];
    for (int i = 1; i < n; i++)
    {
        pre_sum[i] = pre_sum[i-1] + a[i];
    }
    for (int i = n-1; i>=0; i--)
    {
        cout<<pre_sum[i]<<" ";
    }
    
    return 0;
}