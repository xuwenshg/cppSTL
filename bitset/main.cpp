#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    bitset <10> b;

    b.set();
    b.set(5, 0);
 //   b.set(5, 1);
    b.reset(4);

 //   bitset <10 >::iterator it;
 //   for (it = b.begin(); it != b.end(); it ++)
 //       cout <<  << " ";
    for (int i = 0; i < 10; i ++)
    {
        cout << b[i] << " ";
    }
    cout << endl;

    bitset <5> b0(120);
    for (int i = 0; i < 5; i ++)
    {
        cout << b0[i] << " ";
    }
    cout << endl;

    return 0;
}
