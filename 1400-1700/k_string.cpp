#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;
    string s;
    cin >> s;

    int n = s.size();
    if (n % k != 0) {
        cout << -1;
        return 0;
    }

    vector<int> freq(26, 0);
    for (char c : s) freq[c - 'a']++;

    string base = "";
    for (int i = 0; i < 26; i++) {
        if (freq[i] % k != 0) {
            cout << -1;
            return 0;
        }
        base.append(freq[i] / k, char('a' + i));
    }

    for (int i = 0; i < k; i++) {
        cout << base;
    }

    return 0;
}
