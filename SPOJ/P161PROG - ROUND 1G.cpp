#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	long long int n;
	cin>>n;
	
	for(long long int i=2;i*i<=n;i++)
	{
		while(n%(i*i)==0)
		{
			n=n/i;
		}
	}
	cout<<n;
} 