#include<bits/stdc++.h>
using namespace std;

int chips(int n, int m) {
    int chips_per_round = n * (n + 1) / 2;

    int complete_rounds = m / chips_per_round;
    int remaining = m % chips_per_round;

    for(int i = 1; i <= n && remaining >= i; i++) {
        remaining -= i;
    }
    
    return remaining;
}

int main() {
    int n,m;
    cin>>n>>m;

    cout<<chips(n,m);
    return 0;
}