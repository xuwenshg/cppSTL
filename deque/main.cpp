#include <iostream>
#include <deque>

using namespace std;

int main()
{//双端队列
    deque <int > dq;
    for (int i = 0; i < 10; i ++)
    {
        dq.push_back(i);
    }
    while(!dq.empty())
    {
        cout << dq.front() << " ";
        dq.pop_front();
    }
    cout << endl;
    return 0;
}
