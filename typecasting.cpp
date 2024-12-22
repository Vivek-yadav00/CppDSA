#include <iostream>
using namespace std;
int main()
{
    float x=455;
    float &y=x;
    cout<<"x: "<<x<<"\n";
    cout<<"y: "<<y<<"\n";

    int a=78;
    float b=45.6;
    cout<<"The value of a is "<<float(a)<<"\n";
    cout<<"The value of b is "<<int(b);

    return 0;
}
