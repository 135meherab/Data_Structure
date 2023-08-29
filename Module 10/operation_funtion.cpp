#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist = {10,20,10,30,40,50,10};
    // mylist.remove(10);

    // mylist.sort();
    // mylist.sort(greater<int>());

    // mylist.sort();
    // mylist.unique();

    mylist.reverse();
    for(int value: mylist)
    {
        cout<<value<<endl;
    }
    return 0;
}