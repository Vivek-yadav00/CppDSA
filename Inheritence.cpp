#include <iostream>
using namespace std;

class emp
{
    // Base class
public:
    int id;
    float salary;
    emp(int idn)
    {
        id = idn;
        salary = 34.50;
    }
    emp() {};
};

// creating derived class form base class
class programmer : public emp
{
public:
    int lcode;
    programmer(int rno)
    {
        id = rno;
        lcode = 9;
    }
    void set()
    {
        cout << id << endl;
    }
};

int main()
{
    emp harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    programmer skill(10);
    cout << skill.lcode << endl;
    cout << skill.id << endl;
    skill.set();
    return 0;
}
