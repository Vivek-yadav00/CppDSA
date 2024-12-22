#include <iostream>
using namespace std;

int sum(int a,int b)
{
   return a+b;
}
int sum(int a,int b,int c)
{
   return a+b+c;
}

int main()
{
    cout<<"The sum of 2 and 4 is "<<sum(2,4)<<"\n";
    cout<<"The sum of 2 and 9 and 6 is "<<sum(2,9,6);
    return 0;
}
