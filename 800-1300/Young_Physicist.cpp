#include<bits/stdc++.h>
using namespace std;

string young_physicist(vector<vector<int>> &force) {
    int sum_x = 0, sum_y=0, sum_z=0;

    for(int i=0; i<force.size(); i++) {
        auto f = force[i];
        sum_x += f[0];
        sum_y += f[1];
        sum_z += f[2];
    }

    if(sum_x == 0 && sum_y == 0 && sum_z == 0) return "YES";
    return "NO";
}


int main() {
    int n;
    cin>>n;
    vector<vector<int>> force(n, vector<int>(3));
    for(int i=0; i<n; i++) {
        cin>>force[i][0];
        cin>>force[i][1];
        cin>>force[i][2];
    }
    cout<<young_physicist(force)<<endl;
    return 0;
}