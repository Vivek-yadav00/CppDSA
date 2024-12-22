#include <iostream>
using namespace std;
int c = 10;
int main()
{
    // int a, b, c;
    // cout << "Enter the value of a:\n";
    // cin >> a;
    // cout << "Enter the value of b:\n";
    // cin >> b;
    // c = a + b;
    // cout << "The sum is: " << c;
    // cout << "\nThe global c is: " <<::c;

    float d = 18.8;
    long double e = 98.5;
    cout << "The value of d is " << d << "\n"
         << "The value of e is " << e;

    cout << "The size of 34.4 is " << sizeof(34.4) << "\n";
    cout << "The size of 34.4f is " << sizeof(34.4f) << "\n";
    cout << "The size of 34.4F is " << sizeof(34.4F) << "\n";
    cout << "The size of 34.4l is " << sizeof(34.4l) << "\n";
    cout << "The size of 34.4L is " << sizeof(34.4L) << "\n";

    return 0;
}