#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int size;
    cin >> size;

    vector<long long> arr(size);
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    long long currentSum = arr[0];
    long long bestSum = arr[0];

    for (int i = 1; i < size; ++i) {
        currentSum = max(arr[i], currentSum + arr[i]);
        bestSum = max(bestSum, currentSum);
    }

    cout << bestSum;
    return 0;
}