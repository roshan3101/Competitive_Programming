#include<bits/stdc++.h>
using namespace std;

long long solve(int n, vector<long long>& a) {
    vector<long long> suffix(n+1,0);
    for(int i=n-1;i>=0;i--) {
        suffix[i] = suffix[i+1] + a[i];
    }

    long long maxi = LLONG_MIN;
    long long curr_abs = 0;

    for(int right=0; right<n; right++) {
        long long current_score;
        if(right == 0) {
            current_score = -suffix[1];
        }
        else {
            long long suff_sum = suffix[right + 1];
            current_score = a[0] + curr_abs - suff_sum;
            curr_abs += abs(a[right]);
        }

        if(current_score > maxi) {
            maxi = current_score;
        }
    }

    return maxi;

}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;

        vector<long long> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        cout<<solve(n,a)<<"\n";
    }
}