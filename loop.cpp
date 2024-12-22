#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Tell me your age\n";
    cin >> age;
    if (age > 18)
    {
        cout << "Can vote";
    }
    else if (age == 18)
    {
        cout << "One more to go";
    }

    else
    {
        cout << "Not eligible";
    }
    return 0;
}  
