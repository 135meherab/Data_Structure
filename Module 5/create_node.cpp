#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int value;
        Node * next_node;
    
};
int main()
{
    Node a,b;
    a.value = 10;
    b.value = 20;
    a.next_node = &b;
    b.next_node = NULL;

    cout<<a.value<<endl<<b.value;
    cout<<endl<<(a.next_node->value);
    return 0;
}