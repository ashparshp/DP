#include <iostream>
using namespace std;

/* TC:  O(2^n) and SC: O(n) */
void towerOfHanoi(int n, char from, char helper, char to) {
    if (n == 0) {
        return;
    }
    towerOfHanoi(n-1, from, to, helper);
    cout << from << " -> " << to << endl;
    towerOfHanoi(n-1, helper, from, to);
}

int main() {
    int n;
    cout << "Input: ";
    cin >> n;
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}