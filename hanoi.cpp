#include <iostream>
using namespace std;

void hanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 0) {
        return;
    }
    // Move n-1 disks from from_rod to aux_rod using to_rod as auxiliary
    hanoi(n - 1, from_rod, aux_rod, to_rod);

    // Move the nth disk from from_rod to to_rod
    cout << "Move disk " << n << " from " << from_rod << " to " << to_rod << endl;

    // Move n-1 disks from aux_rod to to_rod using from_rod as auxiliary
    hanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main() {
    int n = 4; 
    hanoi(n, 'A', 'C', 'B'); 
    return 0;
}