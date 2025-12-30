#include<iostream>
#include<string>

using namespace std;

int main() 
{
	int n;
	cin>>n;
	int prev = -1;
	int count = 0;
	while(n--)
	{
		int s;
		cin>>s;
		if(prev == -1 || prev != s) 
		{
			count++;
		}
		prev = s;

	}
	cout<<count<<endl;
	return 0;
}