#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int backs = 1;
    int forword = n;
    int mid_line = (n+1)/2;

    for (int i = 1; i <= n; i++)
    {

        if(i == mid_line)
        {
            for (int j = 1; j <= n; j++)
            {
                if(j == i)
                {
                    cout<<"X";
                }
                else cout<<" ";
            }
            
        }
        else   
        {
            for (int j = 1; j <= n; j++)
            {
            if(j == backs) cout<<"\\";
            else if(j== forword) cout<<"/";
            else cout<<" ";
        
            }
        }
        backs++;
        forword--;
        cout<<endl;
        
        
    }
    
    return 0;
}