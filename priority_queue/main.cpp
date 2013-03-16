#include <iostream>
#include <queue>

using namespace std;

struct node {
    int i;
    bool operator < (const node &a) const {
        return (a.i < i);
    }
};

int main()
{
    priority_queue <int> p;
    for (int i = 1; i < 10; i ++)
        p.push(i);

    int i;
    while (! p.empty())
    {
        i = p.top();
        p.pop();
        cout << i << " ";
    }
    cout << endl;//以上是按<比较


    priority_queue <node> pnode;//以下是按>比较
    for (i = 1; i < 10; i ++)
    {
        node t = node();
        t.i = i;
        pnode.push(t);
    }

    node a;
    while (! pnode.empty())
    {
        a = pnode.top();
        pnode.pop();
        cout << a.i << " ";
    }
    cout << endl;
    return 0;
}
