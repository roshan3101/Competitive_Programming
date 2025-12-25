#include<bits/stdc++.h>
using namespace std;

string way_too_long_words(string word) {
    string res = "";
    if(word.length() > 10) {
        res = word[0] + to_string(word.length() - 2) + word[word.length() - 1];
    } else {
        res = word;
    }
    return res;
}

int main() {
    int n;
    cin>>n;
    vector<string> words(n);
    for(int i=0;i<n;i++) {
        cin>>words[i];
    }
    for(int i=0;i<n;i++) {
        cout<<way_too_long_words(words[i])<<endl;
    }
    return 0;
}