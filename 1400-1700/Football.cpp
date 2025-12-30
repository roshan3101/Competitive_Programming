#include <iostream>
#include <string>
using namespace std;

string football(string s) {
    if(s.find("1111111") != string::npos || s.find("0000000") != string::npos) {
        return "YES";
    }
    return "NO";
}

int main() {
    string s;
    cin>>s;

    cout<<football(s);
    return 0;
}