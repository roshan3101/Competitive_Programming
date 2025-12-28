#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int total = accumulate(a.begin(), a.end(), 0);

    sort(a.begin(), a.end(), greater<int>());

    int curr = 0;
    int cnt = 0;

    for (int x : a) {
        curr += x;
        cnt++;
        if (curr > total - curr) {
            break;
        }
    }

    cout << cnt;
    return 0;
}
