#include<iostream>
#include<vector>
using namespace std;

void solve(int n, int k, vector<int>& heights) 
{
	long long curr = 0LL;
	for(int i=0; i<k; i++) 
	{
		curr += heights[i];
	}
	
	long long mini = curr;
	int index = 0;
	
	for(int i=k; i<n; i++) 
	{
		curr = curr - heights[i-k] + heights[i];
		if(curr < mini) 
		{
			mini = curr;
			index = i - k + 1;
		}
	}
	
	cout<<index + 1;
}

int main() 
{
	int n, k;
	cin >> n >> k;
	vector<int> heights(n);
	for(int i=0; i<n; i++) 
	{
		cin >> heights[i];
	}
	
	solve(n,k,heights);
	return 0;
	
}