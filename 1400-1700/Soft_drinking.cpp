#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int drinks = (k*l) / nl;
    int salt = p / np;
    int limes = (c * d);

    cout<<min({drinks, salt, limes})/n;
    return 0;
}