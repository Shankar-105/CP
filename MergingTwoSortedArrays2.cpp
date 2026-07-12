#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<long long> a(n), b(m);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    int i = 0, j = 0;
    vector<long long> merged;
    merged.reserve(n + m);

    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            merged.push_back(a[i++]);
        } else {
            merged.push_back(b[j++]);
        }
    }

    while (i < n) {
        merged.push_back(a[i++]);
    }
    while (j < m) {
        merged.push_back(b[j++]);
    }

    for (int k = 0; k < static_cast<int>(merged.size()); ++k) {
        cout << merged[k] << (k + 1 == static_cast<int>(merged.size()) ? '\n' : ' ');
    }

    return 0;
}