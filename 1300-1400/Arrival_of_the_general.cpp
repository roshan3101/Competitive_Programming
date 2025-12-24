#include<bits/stdc++.h>
using namespace std;

int arrival_of_the_general(int n,vector<int>& nums) {
    int count = 0;
    int min_val = *min_element(nums.begin(), nums.end());
    int max_val = *max_element(nums.begin(), nums.end());
    int min_dist = 0, max_dist = 0;

    for(int i=0;i<n;i++) {
        if(nums[i] == max_val){
            max_dist = i;
            count += max_dist;
            break;
        }
    }

    for(int i=n-1; i>=0;i--) {
        if(nums[i] == min_val) {
            min_dist = i;
            count += n-i-1;
            break;
        }
    }

    if(min_dist < max_dist) count--;

    return count;
}

int main() {
    int n; cin>>n;
    vector<int> nums(n);

    for(int i=0;i<n;i++) cin>>nums[i];

    cout<<arrival_of_the_general(n,nums);
    return 0;
}