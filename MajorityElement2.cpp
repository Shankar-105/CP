#include <algorithm>
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

    long long cand1 = 0, cand2 = 1;
    int count1 = 0, count2 = 0;

    // Boyer-Moore voting for elements that may appear more than n/3 times.
    for (long long x : arr) {
        if (x == cand1) {
            ++count1;
        } else if (x == cand2) {
            ++count2;
        } else if (count1 == 0) {
            cand1 = x;
            count1 = 1;
        } else if (count2 == 0) {
            cand2 = x;
            count2 = 1;
        } else {
            --count1;
            --count2;
        }
    }

    count1 = 0;
    count2 = 0;
    for (long long x : arr) {
        if (x == cand1) {
            ++count1;
        } else if (x == cand2) {
            ++count2;
        }
    }

    vector<long long> ans;
    if (count1 > n / 3) {
        ans.push_back(cand1);
    }
    if (count2 > n / 3) {
        ans.push_back(cand2);
    }

    sort(ans.begin(), ans.end());
    if (ans.empty()) {
        cout << -1 << '\n';
    } else {
        for (int i = 0; i < static_cast<int>(ans.size()); ++i) {
            cout << ans[i] << (i + 1 == static_cast<int>(ans.size()) ? '\n' : ' ');
        }
    }

    return 0;
}