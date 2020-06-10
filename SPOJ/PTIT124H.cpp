/*
https://www.spoj.com/PTIT/problems/PTIT124H/
*/
#include<bits/stdc++.h>
using namespace std;

main(){
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	if(a==c) cout<<e;
	else if(a==e) cout<<c;
	else cout<<a;
	cout<<" ";
	if(b==d) cout<<f;
	else if(b==f) cout<<d;
	else cout<<b;
}

// code by Bao Trung NTP

