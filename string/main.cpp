#include <iostream>

using namespace std;
long stol(string s)
{
    int i = 1,f = 0;
    long l = 0;
    string::iterator it;
    for (it = s.end() - 1; it != s.begin()-1; it --)
    {
        if (*it == ',')
            continue ;
        else if (*it == '-')
        {
            f = 1;
            break ;
        }
        else
        {
            l += long((*it - '0') * i);
            i *= 10;
        }
    }
    if (f == 1)
        l = 0 - l;

    return l;
}
int main()
{
    string s1, s2;
    long d1, d2;

    while (cin >> s1 >> s2)
    {
        d1 = stol(s1);
        d2 = stol(s2);
        cout << d1 + d2 << endl;
    }
    return 0;
}
