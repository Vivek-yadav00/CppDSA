#include <iostream>
using namespace std;

class base1
{
protected:
    int base1int;

public:
    void set(int a)
    {
        base1int = a;
    }
};

class base2
{
protected:
    int base2int;

public:
    void setm(int a)
    {
        base2int = a;
    }
};

class derived : public base1 ,public base2{
    public:
        void show(){
            cout<<"The value of base1int is: "<<base1int<<endl;
            cout<<"The value of base2int is: "<<base2int<<endl;
            cout<<"The value of sum is: "<<base1int+base2int<<endl;
        }
};

int main()
{
    derived harry;
    harry.set(25);
    harry.setm(4);
    harry.show();
}
