#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (auto &x : a) cin >> x;

    long long current = a[0], answer = a[0];
    for (int i = 1; i < n; ++i) {
        current = max(a[i], current + a[i]);
        answer = max(answer, current);
    }
    cout << answer << '\n';
    return 0;
}