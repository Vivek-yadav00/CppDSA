#include <bits/stdc++.h>
using namespace std;
template <class t1, class t2>
class myClass
{
public:
    t1 data1;
    t2 data2;
    myClass(t1 a, t2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << data1 << endl
             << data2 << endl;
    }
};

int main()
{
    myClass<int, char> obj(1, 'c');
    obj.display();
    return 0;
}