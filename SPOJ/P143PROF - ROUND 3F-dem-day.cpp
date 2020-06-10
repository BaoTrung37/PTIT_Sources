/*
https://www.spoj.com/PTIT/problems/P143PROF/
*/
#include<bits/stdc++.h>
using namespace std;
const int mod = 123456789;
long long poW(int n,long long k){
	if(k==0) return 1;
	long long st=poW(n,k/2);
	if(st%2==0) return st*st%mod;
	return (st*st%mod)*n%mod;
}
long long tim(long long n){
	long long kt=poW(2,n-1);
	return kt;
}
main(){
	long long a;
	cin>>a;
	cout<<tim(a)<<endl;
}

// code by Trung Ares

