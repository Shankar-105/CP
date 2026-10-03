#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    for (int i = 0; i + 1 < n; i += 2)
        swap(a[i], a[i + 1]);

    for (int x : a) cout << x << ' ';
    cout << '\n';
    return 0;
}