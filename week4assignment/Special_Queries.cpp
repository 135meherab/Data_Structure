#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue <string> q;
    int n;
    cin>>n;
    int command;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin>>command;
        if(command == 0)
        {
            cin>>s;
            q.push(s);
        } 
        else
        {
            if(q.empty())
            {
                cout<<"Invalid"<<endl;
                continue;
            } 
            cout<<q.front()<<endl;
            q.pop();
        }
    }
    
    return 0;
}