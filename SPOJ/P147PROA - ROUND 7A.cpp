/*
https://www.spoj.com/PTIT/problems/P147PROA/
*/
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

main(){
	long long a,b,c;
	cin>>a>>b>>c;
	long long n=a*b*c;
	long long x=sqrt(n)/a;
	long long y=sqrt(n)/b;
	long long z=sqrt(n)/c;
	cout<< 4*(x+y+z);
}

// code by Bao Trung NTP

