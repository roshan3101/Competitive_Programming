#include<bits/stdc++.h>
using namespace std;

int lunch_rush(int n, int k, vector<pair<int,int>>& times) {
    int max_time = INT_MIN;
    for(int i=0;i<n;i++) {
        int joy = 0;
        if(times[i].second > k) {
            joy = times[i].first - (times[i].second - k);
        }
        else{
            joy = times[i].first;
        }
        max_time = max(max_time, joy);
    }
    return max_time;
}

int main() {
    int n,k;
    cin>>n>>k;

    vector<pair<int,int>> times(n);
    for(int i=0;i<n;i++) {
        cin>>times[i].first>>times[i].second;
    }

    cout<<lunch_rush(n,k,times);
    return 0;
}