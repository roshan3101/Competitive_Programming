#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() 
{
	int n, k;
	cin >> n >> k;
	
	vector<pair<int, int>> teams(n);
	for(int i=0; i<n; i++) 
	{
		cin >> teams[i].first >> teams[i].second;
	}

	sort(teams.begin(), teams.end(), [](const auto &a, const auto &b) 
	{
		if(a.first != b.first) 
		{
			return a.first > b.first;
		}
		return a.second < b.second;
	});
	
	int currentRank = 1;
	
	for(int i=0; i<n;) 
	{
		int j = i;
		while(j < n && teams[j] == teams[i]) j++;
		
		int groupSize = j - i;
		int startRank = currentRank;
		int endRank = currentRank + groupSize - 1;
		
		if(k >= startRank && k <= endRank) 
		{
			cout << groupSize << endl;
			return 0;
		}
		
		currentRank += groupSize;
		i = j;
	}
	
	return 0;
}