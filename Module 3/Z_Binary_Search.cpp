#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    
    for (int i = 0; i < q; i++)
    {
        
        int x;
        cin >> x;
        int l = 0;
        int r = n-1;
        int flag = 0;
        
        for (int j = 0; l<=r; j++)
        {
            int mid = (l+r)/2;
            if(a[mid] == x)
            {
                flag = 1;
                break;
            }
            if (a[mid] < x)
            {
                l = mid + 1;
                
            }
            else if(a[mid] > x)
            {
                r = mid -1;
                
            }
        }
        (flag==1)? cout<<"found"<<endl:cout<<"not found"<<endl;
        

    }

    return 0;
}