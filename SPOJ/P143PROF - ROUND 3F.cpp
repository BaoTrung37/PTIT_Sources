/*
https://www.spoj.com/PTIT/problems/P143PROF/
*/
#include<bits/stdc++.h>
using namespace std;
const int mod = 123456789;

long long luythua2(long long n,long long k){
	if( k== 0) return 1;
	long long st = luythua2(n,k/2);
	if(k % 2 == 0) return st * st % mod;
	return (st * st % mod) * n % mod;
}
long long tim(long long n){
	long long x = luythua2(2 , n-1);
	return x;
}
main(){
	long long k;
	cin >> k;
	cout<<tim(k)<<endl;
}
