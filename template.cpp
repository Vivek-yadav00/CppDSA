#include <bits/stdc++.h>
using namespace std;
template <class t>
class temp 
{
public:
    t *arr;
    int size;
    temp (int m)
    {
        size = m;
        arr = new t[size];
    }

    ~temp () {
        delete[] arr;
    }

    t dotproduct(temp  &v)
    {
        t d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{   
    temp  <int> v1(3);
    v1.arr[0] = 1;
    v1.arr[1] = 2;
    v1.arr[2] = 3;
    temp <int> v2(3);
    v2.arr[0] = 4;
    v2.arr[1] = 5;
    v2.arr[2] = 6;
    int a = v1.dotproduct(v2);
    cout << a << endl;
    return 0;
}