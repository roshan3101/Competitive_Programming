#include<bits/stdc++.h>
using namespace std;

void solve(int n, vector<long long>& nums) {
    long long prev = 0;
    long long spent = 0;
    long long energy = 0;
    for(int i=0;i<n;i++) {
        energy += (prev - nums[i]);
        if(energy < 0) {
            spent += -energy;
            energy = 0;
        }
        prev = nums[i];
    }
    cout<<spent<<"\n";
    return;
}

int main() {
    int n;
    cin>>n;
    vector<long long> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];

    solve(n, nums);
    return 0;
}