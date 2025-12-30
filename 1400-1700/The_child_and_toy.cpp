#include<iostream>
#include<vector>
using namespace std;

int main() 
{
	int n, m;
	cin >> n >> m;
	
	vector<int> values(n);
	for(int i=0; i<n; i++) 
	{
		cin >> values[i];
	}
	
	long long ans = 0LL;
	
	for(int i=0; i<m; i++) 
	{
		int x,y;
		cin >> x >> y;
		ans += min(values[x-1], values[y-1]);
	}
	
	cout << ans << endl;
	return 0;
}