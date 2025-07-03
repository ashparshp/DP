#include <iostream>
using namespace std;
int call_count = 0;
vector<int> memo;

int fib(int n) {
    call_count++;

    if (n <= 2) return 1;

    if (memo[n] != -1) return memo[n];

    return memo[n] = fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cout << "Input: ";
    cin >> n;
    memo.resize(n+1, -1);
    
    cout << fib(n) << endl;
    cout << call_count;
    return 0;
}