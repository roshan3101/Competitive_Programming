#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    string ans = "";

    for(char& c : s) {
        if(c >= 'A' && c <= 'Z') {
            c = c + 32;
        }

        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
            continue;
        }
        else{
            ans.push_back('.');
            ans.push_back(c);
        }
    }
    cout<<ans;
    return 0;
}