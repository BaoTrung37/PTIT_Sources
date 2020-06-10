/*
https://www.spoj.com/PTIT/problems/P132SUMD/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a==b+c) cout<<a<<"="<<b<<"+"<<c;
	else if(a==b-c) cout<<a<<"="<<b<<"-"<<c;
	else if(a==-b+c) cout<<a<<"=-"<<b<<"+"<<c;
	else if(a==b*c) cout<<a<<"="<<b<<"*"<<c;
	else if(a==b/c) cout<<a<<"="<<b<<"/"<<c;
	else if(a==c/b) cout<<a<<"*"<<b<<"="<<c;
}

// code by Bao Trung NTP

