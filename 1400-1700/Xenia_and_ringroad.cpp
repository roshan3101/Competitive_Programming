#include<bits/stdc++.h>
using namespace std;

long long xenia_and_ringroad(int n, int m, vector<int> &a) {
    long long time = 0;
    int current = 1;
    for(int i=0;i<m;i++) {
        if(a[i] >= current) {
            time += a[i] - current;
        }
        else {
            time += n - current + a[i];
        }
        current = a[i];
    }  
    return time;
}
int main() {
    int n, m;
    cin>>n>>m;
    vector<int> a(m);
    for(int i=0;i<m;i++) cin>>a[i];

    cout<<xenia_and_ringroad(n, m, a);
    return 0;
}