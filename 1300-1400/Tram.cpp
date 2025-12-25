#include<bits/stdc++.h>
using namespace std;

int tram(vector<pair<int,int>>& stops) {
    int max_people = 0;
    int curr = 0;
    for(int i=0;i<stops.size();i++) {
        curr -= stops[i].first;
        curr += stops[i].second;
        max_people = max(max_people, curr);
    }
    return max_people;
}

int main() {
    int n;cin>>n;
    vector<pair<int,int>> stops(n);
    for(int i=0;i<n;i++) {
        cin>>stops[i].first>>stops[i].second;
    }

    cout<<tram(stops);
    return 0;
}