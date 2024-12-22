#include <iostream>
using namespace std;

int sum(int a,int b){
    int c=a+b;
    return c;

}

int main()
{
    int x,y;
    cout<<"Enter first number\n";
    cin>>x;
    cout<<"Enter second number\n";
    cin>>y;
    int q=sum(x,y);
    cout<<"THe sum is "<<q;

    return 0;
}  
