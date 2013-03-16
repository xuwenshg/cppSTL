#include <iostream>
#include <list>
using namespace std;

int main()
{
    list <int > L;
    for (int i  = 1; i < 10; i ++)
        L.push_back(i);

    list <int >::iterator it;
    it = L.begin();
    it ++;
    L.insert(it, 10);

    for (it = L.begin(); it != L.end(); it ++)
        cout << *it << " ";
    cout << endl;

    it --;
    L.remove(*it);
    for (it = L.begin(); it != L.end(); it ++)
        cout << *it << " ";
    cout << endl;
    return 0;
}
