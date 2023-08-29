#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> mylist;
    // cout<<mylist.front();

    // list<int> mylist(10,5);
    // cout<<mylist.front();

    // list<int> mylist = {1,2,3,4,5,6};

    // list<int> myslist2 = {1,2,3,4,5};
    // list<int> mylist(myslist2);

    // int myarray[5]= {100,200,300,400,500};
    // list<int> mylist(myarray,myarray+5);

    vector<int> v = {10,20,30,40,50};
    list<int> mylist(v.begin(),v.end());

    // for(auto it = mylist.begin(); it != mylist.end(); it++)
    // {
    //     cout<<*it<<endl;
    // }

    for (int value : mylist)
    {
        cout<<value<<endl;
    }
    
    return 0;
}