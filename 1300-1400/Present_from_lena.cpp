#include<bits/stdc++.h>
using namespace std;

void print_rhombus(int n) {
    int total_rows = 2 * n + 1;
    
    for(int i = 0; i < total_rows; i++) {
        int peak = min(i, 2 * n - i);
        
        int leading_spaces = (n - peak) * 2;
        
        for(int s = 0; s < leading_spaces; s++) {
            cout << " ";
        }
        
        for(int j = 0; j <= peak; j++) {
            if(j > 0) cout << " ";
            cout << j;
        }
        
        for(int j = peak - 1; j >= 0; j--) {
            cout << " " << j;            
        }
        
        cout << endl;
    }
}

int main() {
    int n;
    cin>>n;

    print_rhombus(n);
    return 0;
}