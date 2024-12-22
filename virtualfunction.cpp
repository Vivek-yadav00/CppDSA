#include <bits/stdc++.h>
using namespace std;

class base
{
public:
    int var_base;
    virtual  void display()
    {
        cout << "Displaying base class variable var_base: " << var_base << endl;
    }
};

class derived : public base
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying base class variable var_base in derived: " << var_base << endl;
        cout << "Displaying derived class variable var_derived: " << var_derived << endl;
    }
};

int main()
{
    base obj_base;
    derived obj_derived;
    base *ptr_base;
    derived *ptr_derived;

    ptr_base = &obj_derived;

    ptr_base->var_base = 34;
    ptr_base->display();

    ptr_derived = &obj_derived;
    ptr_derived->var_base = 34;
    ptr_derived->var_derived = 45;
    ptr_derived->display();
}