#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n) {
    if(n <= 1) return false;
    for(int i=2;i*i<=n;i++) {
        if(n % i == 0) return false;
    }
    return true;
}

string is_next_prime(int x, int y) {
    for(int i=x+1;i<=y;i++) {
        if(is_prime(i)) {
            if(i == y) return "YES";
            else return "NO";
        }
    }
    return "NO";
}

int main() {
    int x,y;
    cin>>x>>y;

    cout<<is_next_prime(x,y);
    return 0;
}