#include <iostream>
using namespace std;

/* decreasing order */
void returnDecreasingOrder(int n) {
    if (n == 0) {
        return;
    }
    cout << n << ",";
    returnDecreasingOrder(n-1);
}

/* increasing order */
void returnIncreasingOrder(int n) {
    int i = 0;
    if (i == n) {
        return;
    }
    returnIncreasingOrder(n-1);
    cout << n << ",";
}

int main() {
    int n;
    cout << "Input: ";
    cin >> n;
    returnDecreasingOrder(n);
    returnIncreasingOrder(n);
    return 0;
}