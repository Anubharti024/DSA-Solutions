#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &arr, int n) {
    int largeNo = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] > largeNo) {
            largeNo = arr[i];
        }
    }

    return largeNo;
}

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = largestElement(arr, n);

    cout << "Largest element = " << ans << endl;

    return 0;
}