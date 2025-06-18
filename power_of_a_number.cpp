#include <iostream>
using namespace std;

/* TC: O(n) */
int powerOfANumber(int a, int n) {
    if (n == 1) {
        return a;
    }

    return (a * powerOfANumber(a, n-1));
}

int main() {
    int n, m;
    cout << "Number: ";
    cin >> n;
    cout << "Power: ";
    cin >> m;
    cout << powerOfANumber(n,m);

    return 0;
}