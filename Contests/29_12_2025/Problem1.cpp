#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
		int n; string s;
		cin >> n >> s;
		
		int bad2025 = 0;
		for(int i=0; i+3<n; i++)
		{
			if(s[i] == '2' && s[i+1] == '0' && s[i+2] == '2' && s[i+3] == '5') bad2025++;
		}
		
		int good2026 = n;
		for(int i=0; i+3<n; i++) 
		{
			int curr = 0;
			if(s[i] != '2') curr++;
			if(s[i+1] != '0') curr++;
			if(s[i+2] != '2') curr++;
			if(s[i+3] != '6') curr++;
			
			if(curr < good2026) good2026 = curr;
		}
		
		if(bad2025 < good2026) cout<<bad2025<<"\n";
		else cout<<good2026<<"\n";
	}
	return 0;
}