/*
https://www.spoj.com/PTIT/problems/P194PROA/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin>>t;
	int a,b,c;
	int dem=0;
	while(t--){
		cin>>a>>b>>c;
		if(a+b+c>=2) dem++;
	}
	cout<<dem;
}

// code by Trung 15cm

