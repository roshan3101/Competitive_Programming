#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

long long calculate_shifts(int n, const vector<int>& first, const vector<int>& second) 
{
	long long valid_counts = 0;
	for(int i=0; i<n; i++) 
	{
		bool found = true;
		for(int j=0; j<n;j++)
		{
			if(first[j] >= second[(j+i)%n]) 
			{
				found = false;
				break;
			}
		}
		if(found) valid_counts++;
	}
	return valid_counts;
}

int main() 
{
	int t;
	cin>>t;
	while(t--) 
	{
		int n;
		cin>>n;
		vector<int> a(n), b(n), c(n);
		for(int &x : a) cin>>x;
		for(int &x : b) cin>>x;
		for(int &x : c) cin>>x;
		
		long long ab = calculate_shifts(n, a, b);
		long long bc = calculate_shifts(n, b, c);
		
		cout<<(ab * bc * n)<<"\n";
	}
	return 0;
}