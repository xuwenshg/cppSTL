#include <iostream>
#include <map>
#include <fstream>

using namespace std;

struct cmp {
    bool operator () (const int &a, const int &b) {
        //from big to small by keyboard
        return a > b;
    }
};

struct node {
    int i;
    string name;
    bool operator < (const node &a) {
        return a.i < i;
    }
};//map <node, int > mp;
int main()
{
    ifstream is("data.in");
    map <int, string, cmp > mp;
    map <int, string, cmp >::iterator it;
    string name;
    for (int i = 10; i > 0; i --)
    {
        is >> name;
        mp.insert(pair <int, string > (i, name));
    }
    for (it = mp.begin(); it != mp.end(); it ++)
        cout << it->second << " ";
    cout << endl;

    it = mp.find(4);
    cout << it->second << endl;

    return 0;
 }
