#include<bits/stdc++.h>
using namespace std;

int stones_on_the_table(int n, string s) {
    int count = 0;
    for(int i=0;i<n-1;i++) {
        if(s[i] == s[i+1]) count++;
    }
    return count;
}

int main() {
    int n;cin>>n;
    string s;
    cin>>s;

    cout<<stones_on_the_table(n, s);
    return 0;
}