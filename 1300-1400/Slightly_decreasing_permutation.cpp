#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;

    vector<int> a(n);
    for(int i=1;i<=n;i++) a[i-1] = i;

    reverse(a.begin(), a.begin() + k + 1);

    for(int x : a) {
        cout<<x<<" ";
    }
    cout<<"\n";
    return 0;
}