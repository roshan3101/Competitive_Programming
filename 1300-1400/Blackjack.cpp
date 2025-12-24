#include<bits/stdc++.h>
using namespace std;

int blackjack(int n) {
    if(n <= 10) return 0;
    int req = n - 10;

    if(req >= 1 && req <= 9) return 4;

    if(req == 10) return 15;

    if(req == 11) return 4;

    return 0;
}

int main() {
    int n;
    cin>>n;
    cout<<blackjack(n);
    return 0;
}