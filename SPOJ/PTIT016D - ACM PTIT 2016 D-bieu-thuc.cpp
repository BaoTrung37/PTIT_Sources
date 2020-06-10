/*

*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9+7;

main(){
	long long n,k;
	cin>>n>>k;
	long long a[n+2];
	for(long i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1);
	long long tong=0;
	for(long i=n;i>=n-k;i--)
		tong+=a[i];
	for(long i=n-k-1;i>=1;i--){
		tong-=a[i];
	}
	cout<<tong;
}


