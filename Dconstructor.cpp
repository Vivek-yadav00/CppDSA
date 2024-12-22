#include <bits/stdc++.h>
using namespace std;

class mycomplex
{
    int a, b;

public:
    mycomplex(void)
    {
        a = 10;
        b = 0;
    }

    void print()
    {
        cout << "Your complex sum is " << a << " + " << b << "i" << endl;
    }
    ~mycomplex(){
        cout<<"constructor worked here";
    }
};

int main()
{
    mycomplex c;
    c.print();
}