#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string word = "hello";
    int i = 0, j = 0;
    int n = s.size();

    while (i < n && j < 5) {
        if (s[i] == word[j]) {
            j++;
        }
        i++;
    }

    if (j == 5)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
