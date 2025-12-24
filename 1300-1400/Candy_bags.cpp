#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> candy_bags(int n) {
    vector<vector<int>> ans(n);
    int total_bags = n * n;
    
    int left = 1, right = total_bags;
    int pair_index = 0;
    
    while (left < right) {
        ans[pair_index % n].push_back(left);
        ans[pair_index % n].push_back(right);
        left++;
        right--;
        pair_index++;
    }
    
    return ans;
}

int main() {
    int n;
    cin>>n;

    vector<vector<int>> ans = candy_bags(n);
    for(int i=0;i<n;i++) {
        for(int it : ans[i]) {
            cout<<it<<" ";
        }
        cout<<"\n";
    }
    return 0;
}