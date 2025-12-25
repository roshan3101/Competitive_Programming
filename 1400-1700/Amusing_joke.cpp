#include<bits/stdc++.h>
using namespace std;

int main() {
    string a,b,c;
    cin>>a>>b>>c;

    if(a.size() + b.size() != c.size()){
        cout<<"NO";
        return 0;
    }

    unordered_map<char,int> mp;
    for(char ch : a) {
        mp[ch]++;
    }
    for(char ch : b) {
        mp[ch]++;
    }

    for(char ch : c) {
        mp[ch]--;
        if(mp[ch] < 0) {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}