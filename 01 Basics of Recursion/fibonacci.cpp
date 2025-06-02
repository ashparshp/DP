#include <iostream>
using namespace std;

int fib(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    int f1 = fib(n - 1);
    int f2 = fib(n - 1);
    return f1 + f2;
}

int main() {
    int n;
    cout << "Input: ";
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}