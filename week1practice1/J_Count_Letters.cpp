#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s;
    vector<int> v(26,0);
    while(cin>>s)
    {
        int value = s - 'a';
        v[value]++;
    }
    for (char i = 0; i < 26; i++)
    {
        if(v[i]!=0)
        {
            char alp = i + 'a';
            cout<<alp<<" : "<<v[i]<<endl;
        }
    }
    
    return 0;
}