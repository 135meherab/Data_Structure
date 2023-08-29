#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> mylst = {10,20,30};
    // list<int> newlst;
    // newlst = mylst;

    // list<int> mylst = {10,20,30};
    // list<int> newlst;
    // newlst.assign(mylst.begin(),mylst.end());

    // list<int> mylst = {10,20,30};
    // mylst.push_back(40);
    // mylst.push_front(100);
    // mylst.pop_back();
    // mylst.pop_back();
    // mylst.pop_front(); 
    
    // list<int> mylst = {10,20,30,40,50};
    // mylst.insert(next(mylst.begin(),2),80);
    // mylst.insert(next(mylst.begin(),5),10);
    
    //list<int> mylst = {10,20,30,40,50};
    // mylst.insert(next(mylst.begin(),3),{100,200,300});
    
    // list<int> mylst = {10,20,30,40,50};
    // list<int> newlist = {300,400,500};
    // mylst.insert(next(mylst.begin(),2),newlist.begin(),newlist.end());
    

    // list<int> mylst = {10,20,30,40,50};
    // mylst.erase(next(mylst.begin(),2));

    // list<int> mylist = {10,20,30,40,50,60,70};
    // mylist.erase(next(mylist.begin(),2),next(mylist.begin(),6));
    
    // list<int> mylist = {10,20,30,10,50,60,10};
    // replace(mylist.begin(),mylist.end(),10, 90);
    
    // for (int value: mylist)
    // {
    //     cout<<value<<endl;
    // }
    

    list<int> mylist = {10,20,30,10,50,60,10};
    auto it = find(mylist.begin(),mylist.end(), 90);
    // cout<<*it<<endl;
    if(it == mylist.end())
    {
        cout<<"Not found";
    }
    else
    {
        cout<<"found";
    }
    return 0;
}