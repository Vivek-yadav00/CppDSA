#include <iostream>
using namespace std;

class student
{
protected:
    int roll;

public:
    void set(int r);
    void get();
};

void student ::set(int r)
{
    roll = r;
}
void student ::get()
{
    cout << "Roll no. is : " << roll << endl;
}

class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void setm(float m, float p);
    void getm();
};

void exam ::setm(float m, float p)
{
    maths = m;
    physics = p;
}

void exam ::getm()
{
    cout << "maths marks is : " << maths << endl;
    cout << "physics marks is : " << physics << endl;
}

class result : public exam{
    float percentage;
    public:
        void dispaly(){
            get();
            getm();
            cout<<"your percentage is : "<<(maths+physics)/2<<"%"<<endl;
        }
};

int main()
{
    result harry;
    harry.set(420);
    harry.setm(95,96);
    harry.dispaly();




}

