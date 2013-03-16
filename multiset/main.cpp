#include <iostream>
#include <set>

using namespace std;

int main()
{
    multiset <int > m;//允许元素至相同
    multiset <int >::iterator it;

    for (int i = 0; i < 10; i ++)
        m.insert(i);
    m.insert(4);
    for (it = m.begin(); it != m.end(); it ++)//默认士从小到大排序
        cout << *it << " ";
    cout << endl;

    it = m.find(4);//如果有重复元素，则返回第一个元素的迭代器
    cout << *it<< endl;
    m.erase(4);//删除所有值为4的元素
    for (it = m.begin(); it != m.end(); it ++)
        cout << *it << " ";

    return 0;
}
