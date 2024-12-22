#include <iostream>
using namespace std;

class complex;

class calcul
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumreal(complex, complex);
    int sumcomp(complex, complex);
};

class complex
{
    int a, b;
    // friend int calcul ::sumreal(complex, complex);
    // friend int calcul ::sumcomp(complex, complex);
    friend class calcul;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printnumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int calcul ::sumreal(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calcul ::sumcomp(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setnumber(1, 4);
    o2.setnumber(5, 7);
    calcul ji;
    int res = ji.sumreal(o1, o2);
    cout << "Real sum " << res<<endl;;
    int resc = ji.sumcomp(o1, o2);
    cout << "Real sum " << resc;
    return 0;
}