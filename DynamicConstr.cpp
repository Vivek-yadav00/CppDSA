#include <bits/stdc++.h>
using namespace std;

class bank
{
    int principal;
    int years;
    float rate;
    float value;

public:
    bank() {}
    bank(int p, int y, float r);
    bank(int p, int y, int r);
    void show();
};

bank ::bank(int p, int y, float r)
{
    principal = p;
    years = y;
    rate = r;
    value = principal;
    for (int i = 0; i < y; i++)
    {
        value = value * (1 + rate);
    }
}
bank ::bank(int p, int y, int r)
{
    principal = p;
    years = y;
    rate = float(r) / 100;
    value = principal;
    for (int i = 0; i < y; i++)
    {
        value = value * (1 + rate);
    }
}

void bank ::show()
{
    cout << endl
         << "principal amount was " << principal << " after " << years << " years is " << value << endl;
}

int main()
{
    bank b1, b2, b3;
    int p, y;
    float r;
    int R;
    cout << "enter a value p q r " << endl;
    cin >> p >> y >> r;
    b1 = bank(p, y, r);
    b1.show();

    cout << "enter a value p q R " << endl;
    cin >> p >> y >> R;
    b2 = bank(p, y, R);
    b2.show();
}