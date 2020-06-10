#include <bits/stdc++.h>
using namespace std;
long long nhan(long long a, long long b,long long M){
	if( b==1 ) return a % M;
	long long temp = nhan(a, b/2,M);
	temp = temp + temp;
	if( b%2==1 ) temp = temp + a;
	return temp % M;
}
 
long long exp(long long a, long long n,long long M ){
	if( n==0 ) return 1;
	long long temp = exp(a, n/2,M);
	temp = nhan(temp, temp,M);
	if( n%2==1 ) temp = nhan(temp, a,M);
	return temp % M;
}
int main (){
	int t;
	cin>>t;
	while(t--){
		long long a,b,M;
		cin>>a>>b>>M;
		if (a%M==0) cout<<"0";
		else cout<<exp(a,b,M)<<endl;
	}	
}
 
