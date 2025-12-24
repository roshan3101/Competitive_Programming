#include<bits/stdc++.h>
using namespace std;

string ultra_fast_mathematician(string& a,string& b) {
    string res = "";
    int n = a.length();

    for(int i=0;i<n;i++) {
        if(a[i] == b[i]) {
            res.push_back('0');
        }
        else res.push_back('1');
    }
    return res;
}

int main() {
    string a,b;
    cin>>a>>b;
    cout<<ultra_fast_mathematician(a,b);
    return 0;
}