/*
https://www.spoj.com/PTIT/problems/BCTEST14/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	int a,b,v;
	cin>>a>>b>>v;
	if(a==v)	cout<<"1";
	else{
		if((v-b)%(a-b)==0)
			cout<<(v-b)/(a-b);
		else cout<<(v-b)/(a-b)+1;
	}
}

// code by Bao Trung NTP

