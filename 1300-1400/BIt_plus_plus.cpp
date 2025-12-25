#include<bits/stdc++.h>
using namespace std;

int bit_plusplus(vector<string>& statements) {
    int x = 0;
    for(int i=0;i<statements.size();i++) {
        if(statements[i] == "X++" || statements[i] == "++X") x++;
        else if(statements[i] == "X--" || statements[i] == "--X") x--;
    }
    return x;
}

int main() {
    int n;
    cin>>n;
    vector<string> statements(n);
    for(int i=0;i<n;i++) cin>>statements[i];

    cout<<bit_plusplus(statements);
    return 0;
}