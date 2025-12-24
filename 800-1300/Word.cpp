#include<bits/stdc++.h>
using namespace std;

string word(string& s) {
    int n = s.length();
    int lower = 0, upper = 0;
    for(char ch : s) {
        if(ch >= 'a' && ch <= 'z') lower++;
        else upper++;
    }
    if(lower >= upper) {
        for(char &c : s) {
            if(c >= 'A' && c <= 'Z') {
                c = c + 32;
            }
        }
    } else {
        for(char &c : s) {
            if(c >= 'a' && c <= 'z') {
                c = c - 32;
            }
        }
    }
    return s;
}

int main() {
    string s;
    cin>>s;
    cout<<word(s);
    return 0;
}