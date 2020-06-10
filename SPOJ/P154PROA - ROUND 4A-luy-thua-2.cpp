/*

*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
ll n,m,k;
void nhap(){
	cin>>n>>m>>k;
}
ll poww(ll a,ll b){
	ll x=poww(a,b/2);
	if(b%2==0) return x*x%k;
	return (x*x%k)*a%k;
}
main(){
	int t;
	cin>>t;
	while(t--){
		nhap();
		long long x=poww(n,m);
		cout<<x<<endl;
	}
}


