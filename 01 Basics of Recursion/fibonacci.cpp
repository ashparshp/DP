#include <iostream>
using namespace std;

/* TC: O(2^n)*/
int fib(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    int f1 = fib(n - 1);
    int f2 = fib(n - 2);
    return f1 + f2;
}

int main() {
    int n;
    cout << "Input: ";
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}