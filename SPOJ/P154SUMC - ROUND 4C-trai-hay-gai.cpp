/*

*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9+7;

long long pow(long long n,long long m,long long k){
	if(m==0) return 1;
	long long x=pow(n,m/2,k);
	if(m%2==0) return x*x%k;
	return (x*x%k)*n%k;
}
main(){
	long long n,m,k;
	cin>>n>>m>>k;
	cout<<pow(n,m,k);
}


