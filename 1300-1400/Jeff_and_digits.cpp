#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt0 = 0, cnt5 = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 0) cnt0++;
        else cnt5++;
    }

    if (cnt0 == 0) {
        cout << -1;
        return 0;
    }

    int use5 = (cnt5 / 9) * 9;

    if (use5 == 0) {
        cout << 0;
        return 0;
    }

    for (int i = 0; i < use5; i++) cout << 5;
    for (int i = 0; i < cnt0; i++) cout << 0;

    return 0;
}
