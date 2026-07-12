#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    long long bestSum = arr[0];
    long long currentSum = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] > arr[i - 1]) {
            currentSum += arr[i];
        } else {
            currentSum = arr[i];
        }
        if (currentSum > bestSum) {
            bestSum = currentSum;
        }
    }

    cout << bestSum << '\n';
    return 0;
}