#include <iostream>
using namespace std;

/* TC: O(n) */
int fact(int n) {
    if (n == 0) {
        return 1;
    }
    int ans = n * fact(n-1);
    return ans;
}

int main() {
    int n;
    cout << "Input: ";
    cin >> n;
    cout << fact(n) << endl;
    return 0;
}