#include <bits/stdc++.h>
using namespace std;

class mycomplex
{
    int a, b;

public:
    mycomplex(int x, int y)
    {
        a = x;
        b = y;
    }

    void print()
    {
        cout << "Your complex sum is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    mycomplex c (4, 6);
    c.print();
}