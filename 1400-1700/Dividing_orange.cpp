#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(k);
    for (int i = 0; i < k; i++) cin >> a[i];

    vector<bool> used(n * k + 1, false);
    for (int x : a) used[x] = true;

    vector<vector<int>> res(k);
    for (int i = 0; i < k; i++) {
        res[i].push_back(a[i]);
    }

    int currChild = 0;
    for (int seg = 1; seg <= n * k; seg++) {
        if (used[seg]) continue;

        while (res[currChild].size() == n) {
            currChild++;
        }
        res[currChild].push_back(seg);
    }

    for (int i = 0; i < k; i++) {
        for (int x : res[i]) cout << x << " ";
        cout << "\n";
    }

    return 0;
}
