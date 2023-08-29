#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    cin.ignore();
    for (int i = 0; i < t; i++)
    {
        string sentense;
        getline(cin,sentense);
        map<string,int> mp;
        stringstream ss(sentense);
        string word;
        int most_mp_int = 0;
        string most_mp_str;
        while(ss>>word)
        {
            mp[word]++;
            if(mp[word]> most_mp_int)
            {
                most_mp_int = mp[word];
                most_mp_str = word;
            }
        }
        
        cout<<most_mp_str<<" "<<most_mp_int<<endl;
    }
    
        
    return 0;
}