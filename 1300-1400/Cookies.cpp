#include<bits/stdc++.h>
using namespace std;

int cookies(int n, vector<int>& nums) {
    int sum = accumulate(nums.begin(), nums.end(), 0);
    int ways = 0;

    for(int i=0;i<n;i++) {
        if((sum - nums[i]) % 2 == 0) ways++;
    }
    return ways;
}


int main() {
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];

    cout<<cookies(n, nums);
    return 0;
}