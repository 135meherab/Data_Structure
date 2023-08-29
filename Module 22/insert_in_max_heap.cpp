#include <bits/stdc++.h>
using namespace std;
int main()
{   
    vector<int> v;
    int n;
    cin>>n;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        v.push_back(x);
        int current_index = v.size()-1;
        while(current_index != 0)
        {
            int parent_index = (current_index - 1) / 2;
            if(v[current_index] > v[parent_index]) swap(v[current_index], v[parent_index]);
            else break;
            current_index = parent_index;
        }
    }
    for(int val: v) cout<<val<<" ";
    return 0;
}