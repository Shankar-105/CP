#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> count(100, 0);
    for (int i = 0, x; i < n; ++i) {
        cin >> x;
        if (x >= 0 && x < 100) ++count[x];
    }

    for (int x : count) cout << x << ' ';
    cout << '\n';
    return 0;
}