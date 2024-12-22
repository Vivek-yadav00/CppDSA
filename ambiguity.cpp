#include <bits/stdc++.h>
using namespace std;

class base1
{
public:
    void greet()
    {
        cout << "how are you ?" << endl;
    }
};
class base2
{
public:
    void greet()
    {
        cout << "kaise ho ?" << endl;
    }
};

class derived : public base1, public base2
{
    int a;

public:
    void greet()
    {
        base1::greet();
    }
};

int main()
{
    base1 obj1;
    base2 obj2;
    obj1.greet();
    obj2.greet();
    derived obj3;
    obj3.greet();
    return 0;
}
