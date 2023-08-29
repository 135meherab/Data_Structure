#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q, l, r;
    cin>>n>>q;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    
    for (int i = 1; i <= q ; i++)
    {
        int sum= 0;
        cin>>l>>r;
        for (int j = l-1; j < r; j++)
        {
            sum = sum + v[j];
        }
        cout<<sum<<endl;
    }
    
    
    
    
    return 0;
}