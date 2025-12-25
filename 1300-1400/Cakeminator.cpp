#include<bits/stdc++.h>
using namespace std;


int cakeminator(int n, int m, vector<string>& grid) {
    vector<bool> safe_row(n, true);
    vector<bool> safe_col(m, true);
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(grid[i][j] == 'S') {
                safe_row[i] = false;
                safe_col[j] = false;
            }
        }
    }
    
    int safe_rows = 0, safe_cols = 0;
    for(int i = 0; i < n; i++) {
        if(safe_row[i]) safe_rows++;
    }
    for(int j = 0; j < m; j++) {
        if(safe_col[j]) safe_cols++;
    }
    
    return safe_rows * m + safe_cols * n - safe_rows * safe_cols;
}


int main() {
    int n,m;
    cin>>n>>m;
    vector<string> grid(n);
    for(int i=0;i<n;i++) {
        cin>>grid[i];
    }

    cout<<cakeminator(n,m,grid);
    return 0;
}