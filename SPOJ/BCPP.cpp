/*
https://www.spoj.com/PTIT/problems/BCPP/
sang nguyen to
*/
#include<bits/stdc++.h>
using namespace std;
long long a[1000006];
void input(){
	int n=1000000;
	for(int i=1;i<=n;i++){
		a[i]=0;
	}
	a[0]=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n/i;j++){
			a[i*j]+=i;
		}
	}
}
main(){
	int x,y;
	cin>>x>>y;
	input();
	int dem=0;
	for(int i=x;i<=y;i++){
		if(a[i]-i>i) dem++;
	}
	cout<<dem;
}

// code by Bao Trung NTP

