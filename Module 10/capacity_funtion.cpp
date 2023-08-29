#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> mylist = {10,20,30};
    // cout<<mylist.max_size();

    // list<int> mylist = {10,20,30};
    // mylist.clear();
    // mylist.size()

    // list<int> mylist = {10,20,30};
    // mylist.resize(2);

    // list<int> mylist = {10,20,30};
    // mylist.resize(2);
    // mylist.resize(5);

    list<int> mylist = {10,20,30};
    mylist.resize(2);
    mylist.resize(5,100);
    for(int value:mylist)
    {
        cout<<value<<endl;
    }
    return 0;
}