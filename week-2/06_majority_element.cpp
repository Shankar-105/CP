#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    int candidate = 0, count = 0;
    for (int x : a) {
        if (count == 0) candidate = x;
        count += (x == candidate ? 1 : -1);
    }

    count = 0;
    for (int x : a) count += (x == candidate);
    cout << (count > n / 2 ? candidate : -1) << '\n';
    return 0;
}