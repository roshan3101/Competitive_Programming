#include<bits/stdc++.h>
using namespace std;

string hq9(string& p) {
    if(p.find('H') != string::npos || p.find('Q') != string::npos || p.find('9') != string::npos) return "YES";
    return "NO";
}

int main() {
    string p;
    cin>>p;

    cout<<hq9(p);
    return 0;
}