#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> lights_out(vector<vector<int>> &grid) {
    vector<vector<int>> result(3, vector<int>(3,1));
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            if(grid[i][j] % 2 != 0) {
                result[i][j] = 1 - result[i][j];
                if(i > 0) result[i-1][j] = 1 - result[i-1][j];
                if(i < 2) result[i+1][j] = 1 - result[i+1][j];
                if(j > 0) result[i][j-1] = 1 - result[i][j-1];
                if(j < 2) result[i][j+1] = 1 - result[i][j+1];
            }
        }
    }
    return result;
}

int main() {
    vector<vector<int>> grid(3, vector<int>(3));
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cin>>grid[i][j];
        }
    }

    auto res = lights_out(grid);
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cout<<res[i][j];
        }
        cout<<"\n";
    }
    return 0;
}