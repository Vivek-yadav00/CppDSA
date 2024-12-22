#include <bits/stdc++.h>
using namespace std;

class student
{
protected:
    int roll;

public:
    void set_number(int a)
    {
        roll = a;
    }
    void print()
    {
        cout << "Your roll number is " << roll << endl;
    }
};

class test : virtual public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float m, float p)
    {
        maths = m;
        physics = p;
    }
    void print_marks()
    {
        cout << "Your marks are " << maths << " and " << physics << endl;
    }
};

class sports : virtual public student
{
protected:
    float score;

public:
    void set_score(float s)
    {
        score = s;
    }
    void print_score()
    {
        cout << "Your PT score is " << score << endl;
    }
};

class result : public test, public sports
{
private:
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        print();
        print_marks();
        print_score();
        cout << "Your total score is " << total << endl;
    }
};

int main()
{
    result harry;
    harry.set_number(420);
    harry.set_marks(94.0, 90.0);
    harry.set_score(9.0);
    harry.display();
}