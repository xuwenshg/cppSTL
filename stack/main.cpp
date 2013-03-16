#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack <int> s;
    for (int i = 1; i < 10; i ++)
    {
        s.push(i);
    }

    int i;
    while (! s.empty())
    {
        i = s.top();
        s.pop();
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
