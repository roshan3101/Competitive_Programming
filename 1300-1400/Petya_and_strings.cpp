#include<bits/stdc++.h>
using namespace std;

int petya_and_strings(string& a, string& b) {
    int n = a.size();
    for(int i=0;i<n;i++) {
        if(a[i] >= 'a' && a[i] <= 'z') a[i] = a[i] - 32;
        if(b[i] >= 'a' && b[i] <= 'z') b[i] = b[i] - 32;
        if(a[i] > b[i]) return 1;
        else if(a[i] < b[i]) return -1;
    }
    return 0;
}

int main() {
    string a,b;
    cin>>a>>b;
    cout<<petya_and_strings(a,b);
    return 0;
}