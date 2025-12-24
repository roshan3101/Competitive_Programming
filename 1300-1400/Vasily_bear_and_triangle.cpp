#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x, y;
    cin >> x >> y;

    long long L = llabs(x) + llabs(y);

    long long sx = (x > 0 ? 1 : -1);
    long long sy = (y > 0 ? 1 : -1);

    long long x1 = 0, y1 = sy * L;
    long long x2 = sx * L, y2 = 0;

    if (x1 > x2) {
        swap(x1, x2);
        swap(y1, y2);
    }

    cout << x1 << " " << y1 << " " << x2 << " " << y2 << "\n";
    return 0;
}
