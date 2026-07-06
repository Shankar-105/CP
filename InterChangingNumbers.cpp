#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size;
    cin >> size;

    vector<int> arr(size);
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int largestValue = arr[0];
    int smallestValue = arr[0];

    int idx1 = 0;
    int idx2 = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] < smallestValue) {
            idx1 = i;
        }
        else if (arr[i] > largestValue) {
            idx2 = i;
        }
    }

    swap(arr[idx1],arr[idx2]);

    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}