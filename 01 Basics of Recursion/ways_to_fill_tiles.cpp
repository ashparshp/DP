#include <iostream>
using namespace std;

/* TC: O(φ^n) and SC: O(n) */
int waysToFill(int n) {
    if (n < 4) {
        return 1;
    }
    return waysToFill(n-1) + waysToFill(n-4);
}

int main() {
    int n;
    cout << "Input: ";
    cin >> n;
    cout << waysToFill(n) << endl;
    return 0;
}