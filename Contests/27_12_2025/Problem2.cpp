#include <bits/stdc++.h>
using namespace std;

int solve(string &s) {
    int n = s.length();
    int operations = 0;
    if(s[0] == 'u') {
        s[0] = 's';
        operations++;
    }
    if(s[n-1] == 'u') {
        s[n-1] = 's';
        operations++;
    }
    int len = 0;
    for(char c : s) {
        if(c == 'u') {
            len++;
        }
        else {
            operations += len / 2;
            len = 0;
        }
    }

    operations += len / 2;
    return operations;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin>>s;

        cout<<solve(s)<<"\n";
    }

    return 0;
}
