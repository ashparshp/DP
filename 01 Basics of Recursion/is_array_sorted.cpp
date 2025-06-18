#include <iostream>
using namespace std;

/* Approach-1 */
bool isSorted(int arr[], int n) {
    if (n == 0 || n == 1) {
        return true;
    }

    if (arr[0] < arr[1] && isSorted(arr+1, n-1)) {
        return true;
    }
    return false;
}

/* Approach-2 */
bool isSortedTwo(int arr[], int i, int n) {
    if (i == n-1) {
        return true;
    }

    if (arr[i] < arr[i+1] && isSortedTwo(arr, i+1, n)) {
        return true;
    }
    return false;
}

int main() {
    int arr[] = {1, 2, 3, 4, 4, 6};
    int n = sizeof(arr)/sizeof(int);
    cout << isSorted(arr, n) << endl;
    cout << isSortedTwo(arr, 0, n) << endl;
    return 0;
}