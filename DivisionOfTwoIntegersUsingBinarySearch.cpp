#include <climits>
#include <iostream>
using namespace std;

static unsigned long long absUnsigned(long long x) {
    if (x >= 0) {
        return static_cast<unsigned long long>(x);
    }
    // Avoid overflow for LLONG_MIN.
    return static_cast<unsigned long long>(-(x + 1)) + 1ULL;
}

int main() {
    long long dividend, divisor;
    cin >> dividend >> divisor;

    if (divisor == 0) {
        cout << "Undefined" << '\n';
        return 0;
    }

    if (dividend == LLONG_MIN && divisor == -1) {
        cout << LLONG_MAX << '\n';
        return 0;
    }

    bool isNegative = (dividend < 0) ^ (divisor < 0);

    unsigned long long a = absUnsigned(dividend);
    unsigned long long b = absUnsigned(divisor);

    unsigned long long low = 0, high = a, q = 0;

    while (low <= high) {
        unsigned long long mid = low + (high - low) / 2;
        if (mid <= a / b) {
            q = mid;
            low = mid + 1;
        } else {
            if (mid == 0) {
                break;
            }
            high = mid - 1;
        }
    }

    long long ans = isNegative ? -static_cast<long long>(q) : static_cast<long long>(q);
    cout << ans << '\n';
    return 0;
}