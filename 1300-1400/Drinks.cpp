#include<bits/stdc++.h>
using namespace std;

double drinks(int n, vector<int>& p) {
    double sum = 0;
    for(int i=0;i<n;i++) sum += (double)p[i]/100;
    return (sum/n)*100;
}

int main() {
    int n;cin>>n;
    vector<int> p(n);
    for(int i=0;i<n;i++) cin>>p[i];

    cout<<drinks(n, p);
    return 0;
}