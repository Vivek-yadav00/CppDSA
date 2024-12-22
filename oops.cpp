#include <iostream>
using namespace std;

class emp
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1);
    void getData()
    {
        cout << "The value of a is " << a << "\n";
        cout << "The value of b is " << b << "\n";
        cout << "The value of c is " << c << "\n";
        cout << "The value of d is " << d << "\n";
        cout << "The value of e is " << e << "\n";
    };
};

void emp ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
};  

int main()
{
    emp vivek;
    vivek.d = 123;
    vivek.e = 654;
    vivek.setData(1, 2, 3);
    vivek.getData();

    return 0;
}