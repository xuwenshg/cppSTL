#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue <int > q;
    for (int i = 1; i < 10; i ++)
    {
        q.push(i);
    }

    int i;
    while (! q.empty())
    {
        i = q.front();
        q.pop();
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
