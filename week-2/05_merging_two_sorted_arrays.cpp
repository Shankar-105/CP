#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;

    vector<int> c;
    merge(a.begin(), a.end(), b.begin(), b.end(), back_inserter(c));

    for (int x : c) cout << x << ' ';
    cout << '\n';
    return 0;
}