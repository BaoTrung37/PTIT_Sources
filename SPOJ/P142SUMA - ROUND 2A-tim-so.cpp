//https://www.spoj.com/PTIT/problems/P142SUMA/
#include <iostream>
#include <vector>
using namespace std;
 
long X;
vector <long> v;
 
void read ()
{
	cin>>X;
}
 
void init ()
{
	long S=0;
	int n=0;
	while (1)
	{
		if (S>X) break;
		n++;
		S=(n*n+n)/2;
		v.push_back(S);
	}
}
 
int BSearch (int front, int back, long x)
{
	if (front<=back)
	{
		int mid=(front+back)/2;
		if (v[mid]==x) return mid;
		else if (v[mid]>x) return BSearch (front, mid-1, x);
		else if (v[mid]<x) return BSearch (mid+1, back, x);
		return -1;
	}
	return -1;
}
 
int main ()
{
	read ();
	init ();
	int kt=0;
	for (int i=0; i<v.size(); i++)
	{
		if (BSearch (0, v.size()-1, X-v[i])!=-1)
		{
			kt=1;
			break;
		}
	}
	if (kt==1) cout<<"YES";
	else cout<<"NO";
	return 0;
}