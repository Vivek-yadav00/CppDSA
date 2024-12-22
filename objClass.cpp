#include <iostream>
using namespace std;

class complex
{
private:
    int a, b;

public:
    void setdata(int a1, int b1);
    void setdatasum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void print()
    {
        cout << "Your complex sum is " << a << " + " << b << "i" << endl;
    }
};
void complex ::setdata(int a1, int b1)
{
    a = a1;
    b = b1;
};
int main()
{
    complex c1, c2, c3;
    c1.setdata(1, 2);
    c1.print();

    c2.setdata(3, 4);
    c2.print();

    c3.setdatasum(c1, c2);
    c3.print();

    return 0;
}