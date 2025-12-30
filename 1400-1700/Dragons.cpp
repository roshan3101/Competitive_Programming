#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int s, n;
    cin >> s >> n;

    vector<pair<int,int>> dragons;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        dragons.push_back({x, y});
    }

    sort(dragons.begin(), dragons.end());

    for (auto &dragon : dragons) {
        if (s <= dragon.first) {
            cout << "NO\n";
            return 0;
        }
        s += dragon.second;
    }

    cout << "YES\n";
    return 0;
}
