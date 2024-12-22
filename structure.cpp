#include <iostream>
using namespace std;
struct emp{
    int id;
    char c;
    float salary;
}ruke;


int main()
{
    ruke.id=1;
    ruke.c='V';
    ruke.salary=340000;
    cout<<"The value is "<<ruke.id<<"\n";
    cout<<"The value is "<<ruke.c<<"\n";
    cout<<"The value is "<<ruke.salary<<"\n";


    return 0;
}  
