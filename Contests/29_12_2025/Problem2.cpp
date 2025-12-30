#include<iostream>
#include<algorithm>
using namespace std;
using ll = long long;

int main() 
{
	int t;
	cin>>t;
	while(t--) 
	{
		ll a,b;
		cin>>a>>b;
		
		ll odd_sum = 0, even_sum = 0;
		int h = 0;
		
		while(true) 
		{
			ll req = 1LL << h;
			ll temp_odd = odd_sum;
			ll temp_even = even_sum;
			
			if((h+1)%2 != 0) 
			{
				temp_odd += req;
			}
			else
			{
				temp_even += req;
			}
			
			bool possible = false;
			if(temp_odd <= a && temp_even <= b) possible = true;
			else if(temp_odd <= b && temp_even <= a) possible = true;
			
			if(possible)
			{
				odd_sum = temp_odd;
				even_sum = temp_even;
				h++;
			}
			else
			{
				break;
			}
		}
		
		cout<<h<<"\n";
	}
	return 0;
}