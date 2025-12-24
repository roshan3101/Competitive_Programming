#include<bits/stdc++.h>
using namespace std;

int number_of_amazing_contests(int n, vector<int>& nums) {
    int count = 0;
    int mini = nums[0];
    int maxi = nums[0];

    for(int i=1;i<n;i++) {
        if(nums[i] < mini) {
            mini = nums[i];
            count++;
        }
        else if(nums[i] > maxi) {
            maxi = nums[i];
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];

    cout<<number_of_amazing_contests(n, nums);
    return 0;
}