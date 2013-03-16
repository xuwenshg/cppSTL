#include <iostream>
#include <set>

using namespace std;

//自定义比较函数，默认从小到大排序
//元素不是结构体
struct cmp {
    bool operator () (const int &a, const int &b) {
        //from big to little
        return a > b;
    }
};

//元素是结构体
struct node {
    int i;
    string name;
    bool operator < (const node &a) {
        //sort from big to little
        return a.i < i;
    }
};//set <node > s;

int main()
{
    set <int > s;
    set <int >::iterator it;

    for (int i = 0; i < 10; i ++)
        s.insert(i);
    for (it = s.begin(); it != s.end(); it ++)
        cout << *it << " ";
    cout << endl;

    it = s.find(5);
    cout << *it << endl;//查找成功返回迭代器位置

    s.erase(5);
    it = s.find(5);
    cout << *it << endl;//查找失败时返回s.end()

    //sort from big to samll
    set <int, cmp > s1;
    set <int, cmp >::iterator it1;

    for (int i = 0; i < 10; i ++)
        s1.insert(i);
    for (it1 = s1.begin(); it1 != s1.end(); it1 ++)
        cout << *it1 << " ";
    cout << endl;

    return 0;
}
