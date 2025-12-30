#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    string ans = "";

    for (int i = 0; i < n;) {
        if (i + 2 < n && s.substr(i, 3) == "WUB") {
            if (!ans.empty() && ans.back() != ' ') {
                ans += ' ';
            }
            i += 3;
        } else {
            ans += s[i];
            i++;
        }
    }

    cout << ans << endl;
    return 0;
}
