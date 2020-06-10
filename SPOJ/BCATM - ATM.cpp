/*
https://www.spoj.com/PTIT/problems/BCATM/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	int n,s,dem=0;
	cin>>n>>s;
	int a[n+2];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=n-1;i>=0;i--){
		if(s>=a[i]){
			int x=s/a[i];
			dem+=x;
			s-=x*a[i];
		}
	}
	if(s>0)
		cout<<"-1";
	else 
		cout<<dem;
}

// code by Trung 15cm

