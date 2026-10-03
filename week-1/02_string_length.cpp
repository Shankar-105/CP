#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin >> ws, s);
    int length = 0;
    for (char c : s) ++length;
    cout << length << '\n';
    return 0;
}