#include<bits/stdc++.h>
using namespace std;

string borze(string &s) {
    int n = s.length();
    string result = "";
    for(int i=0;i<n;i++) {
        if(s[i] == '.') {
            result += '0';
        }
        else if(s[i] == '-' && s[i+1] == '.') {
            result += '1';
            i++;
        }
        else if(s[i] == '-' && s[i+1] == '-') {
            result += '2';
            i++;
        }
    }
    return result;
}

int main() {
    string s;
    cin>>s;
    cout<<borze(s);
    return 0;
}