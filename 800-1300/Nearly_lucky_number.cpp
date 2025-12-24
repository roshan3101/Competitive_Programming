#include<bits/stdc++.h>
using namespace std;
using ll = long long;

string nearly_lucky_number(ll n) {
    string s = to_string(n);
    int count = 0;
    for(char c : s) {
        if(c == '4' || c == '7') count++;
    }

    if(count == 4 || count == 7) return "YES";
    return "NO";
}

int main() {
    ll n;
    cin>>n;

    cout<<nearly_lucky_number(n);
    return 0;
}