#include <bits/stdc++.h>
using namespace std;
void fun(int * &p)
{
    p = NULL;
    cout<<"address of p:"<<&p<<endl;
    cout<<"value of p: "<<p<<endl;
}
int main()
{
    int val = 10;
    int * ptr = &val;
    cout<<"address of val: "<<&val<<endl;
    cout<<"value of ptr:"<<ptr<<endl;
    fun(ptr);
    cout<<"address of ptr: "<<&ptr<<endl;
    return 0;
}