#include <iostream>
using namespace std;

class complex
{
    int x, y;

public:
    void setnumber(int n1, int n2)
    {
        x = n1;
        y = n2;  
    }
    void printnumber()
    {
        cout << "Your number is " << x << " + " << y << "i" << endl;
    }
    friend complex sumcomplex(complex o1, complex o2);
};

complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    int a = o1.x + o2.x;
    int b = o1.y + o2.y;
    o3.setnumber((a), (b));
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setnumber(1, 2);
    c1.printnumber();

    c2.setnumber(3, 4);
    c2.printnumber();

    sum = sumcomplex(c1, c2);
    sum.printnumber();

    return 0;
}