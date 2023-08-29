#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int value;
        Node * next_node;
        Node(int value)
        {
            this->value = value;
            this->next_node = NULL;

        }
};
int main()
{
    Node a(10);
    Node b(20);
    a.next_node = &b;

    cout<<a.value<<endl<<b.value;
    cout<<endl<<(a.next_node->value);
    return 0;
}