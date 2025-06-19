#include <iostream>
using namespace std;

/* TC: O(n) */
int powerOfANumber(int a, int n) {
    if (n == 1) {
        return a;
    }

    return (a * powerOfANumber(a, n-1));
}

/* TC: O(logn) */
int powerOfANumberOptimized(int a, int n) {
    if (n == 1) {
        return a;
    }

    int subProb = powerOfANumberOptimized(a, n/2);
    int subProbSq = subProb * subProb;
    if (n&1) {
        return a * subProbSq;
    }

    return subProbSq;
}

int main() {
    int n, m;
    cout << "Number: ";
    cin >> n;
    cout << "Power: ";
    cin >> m;
    cout << powerOfANumber(n,m);
    cout << powerOfANumberOptimized(n,m);

    return 0;
}