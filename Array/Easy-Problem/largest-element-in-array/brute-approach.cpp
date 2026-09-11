#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &arr, int n) {
    for (int i = 0; i < n; i++) {
        bool largest = true;

        for (int j = 0; j < n; j++) {
            if (arr[j] > arr[i]) {
                largest = false;
                break;
            }
        }

        if (largest) {
            return arr[i];
        }
    }

    return -1;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << largestElement(arr, n);

    return 0;
}