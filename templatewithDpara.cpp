#include <iostream>
using namespace std;
template <typename T>
T sum(T a, T b) {
    return a + b;
}

int main() {
    int int1 = 5, int2 = 10;
    double double1 = 5.5, double2 = 10.5;

    cout << "Sum of integers: " << sum(int1, int2) << endl;
    cout << "Sum of doubles: " << sum(double1, double2) << endl;

    return 0;
}