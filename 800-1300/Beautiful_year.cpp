#include<bits/stdc++.h>
using namespace std;

int beautiful_year(int year) {
    while(true) {
        year++;
        int a = year/1000;
        int b = year/100%10;
        int c = year/10%10;
        int d = year%10;
        if(a != b && a != c && a != d && b != c && b != d && c != d) {
            break;
        }
    }
    return year;
}

int main() {
    int year;
    cin>>year;
    cout<<beautiful_year(year);
    return 0;
}